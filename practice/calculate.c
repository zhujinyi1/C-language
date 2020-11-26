#include<stdio.h>
#include<stdlib.h>


/*����ջ*/
struct shuju   //struct�ṹ�幹��ջ 
{
	int data[100];
	int top;
};


/*����ջ*/ 
struct fuhao
 {
	char symbol[100];
	int top;
};


void InitOperateNum(struct shuju *StackNum)    //����ջ�ǿ� 
{
    StackNum->top = -1;
}


void InitOperateSymbol(struct fuhao *StackSymbol)    //����ջ�ǿ� 
{  
    StackSymbol->top = -1; 
}


/*��������ջ*/
void Inshuju(struct shuju *StackNum, int num)
{
	StackNum->top ++;
	StackNum->data[StackNum->top] = num;
}


/*�������ջ*/ 
void Infuhao(struct fuhao *StackSymbol, char ch)
{
	StackSymbol->top ++;
	StackSymbol->symbol[StackSymbol->top] = ch;
}


/*��ȡ����ջ*/
int Randshuju(struct shuju *StackNum)
{
	return StackNum->data[StackNum->top];
}


/*��ȡ����ջ*/
char Randfuhao(struct fuhao *StackSymbol)
{
	return StackSymbol->symbol[StackSymbol->top];
}


/*������ջȡ������*/
int Putshuju(struct shuju *StackNum)
{
	int x;
	x = StackNum->data[StackNum->top];
	StackNum->top --;
	return x;
}


/*�ӷ���ջȡ������*/
char Putfuhao(struct fuhao *StackSymbol)
{
	char c;
	c = StackSymbol->symbol[StackSymbol->top];
	StackSymbol->top --;
	return c;
}


/*�������ȼ��ж�*/
int judge(char ch) {
	if(ch == '(')
	 {
		return 1; 
  	}
	if(ch == '+' || ch == '-') {
		return 2;
	}
	else if(ch == '*' || ch == '/') {
		return 3;
	}
	else if(ch == ')') {
		return 4;
	}
}


/*��������*/
int Math(int v1, int v2, char c)
{
	int sum;
	switch(c) {
		case '+' : {
			sum = v1 + v2;
			break;
		}
		case '-' : {
			sum = v1 - v2;
			break;
		}
		case '*' : {
			sum = v1 * v2;
			break;
		} 
		case '/' : {
			sum = v1 / v2;
			break;
		}
	}
	return sum;
}


int main()
{
	struct shuju data;
	struct fuhao symbol;
	InitOperateNum(&data);   //�������� 
	InitOperateSymbol(&symbol);  //���÷��� 
	int i, t, sum, v1, v2;
	char c;
	i = t = sum = 0;
	char v[100] = {0};
	char *str = (char *)malloc(sizeof(char)*200);
	while((c = getchar()) != '\n')  //�ǿ��ַ� 
	 {
		str[i] = c;
		i ++;
	}
	str[i] = '\0';
	for(i = 0; str[i] != '\0'; i ++) {
		if(i == 0 && str[i] == '-') {
			v[t++] = str[i];
		}
		else if(str[i] == '(' && str[i+1] == '-') {
			i ++;
			v[t++] = str[i++];
			while(str[i] >= '0' && str[i] <= '9') {
				v[t] = str[i];
				t ++;
				i ++;
			}
			Inshuju(&data, atoi(v));
			while(t > 0) {
				v[t] = 0;
				t --;
			}
			if(str[i] != ')') {
				i --;
				Infuhao(&symbol, '(');
			}
		}
		else if(str[i] >= '0' && str[i] <= '9') {
			while(str[i] >= '0' && str[i] <= '9') {
				v[t] = str[i];
				t ++;
				i ++;
			}
			Inshuju(&data, atoi(v));
			while(t > 0) {
				v[t] = 0;
				t --;
			}
			i --;
		}
		else {
			if(symbol.top == -1) 
			{        //�������ջû��Ԫ�أ�ֱ�Ӱѷ��ŷ������ջ 
				Infuhao(&symbol, str[i]);
			}
			else if(judge(str[i]) == 1) { //����˷�����'('��ֱ�ӷ������ջ 
				Infuhao(&symbol, str[i]);
			}
			else if(judge(str[i]) == 2) { //����˷�����'+'��'-'���ж���ջ�����������ȼ� 
				if(judge(Randfuhao(&symbol)) == 1) { //���ջ��������'('���������ջ 
					Infuhao(&symbol, str[i]);
				}
				else if(judge(Randfuhao(&symbol)) == 2) { //���ջ��������'+'��'-'�����ջ���� 
					while(symbol.top >= 0 && data.top >= 1) { //ѭ����ջ
						v2 = Putshuju(&data);
						v1 = Putshuju(&data);
						sum = Math(v1, v2, Putfuhao(&symbol));
						Inshuju(&data, sum); //��������ѹ������ջ 
					}
					Infuhao(&symbol, str[i]); //�·��Ž�ջ 
				}
				else if(judge(Randfuhao(&symbol)) == 3) { //���ջ��������'*'��'/'���������ջ 
					while(symbol.top >= 0 && data.top >= 1) { //ѭ����ջ
						v2 = Putshuju(&data);
						v1 = Putshuju(&data);
						sum = Math(v1, v2, Putfuhao(&symbol));
						Inshuju(&data, sum); //��������ѹ������ջ 
					}
					Infuhao(&symbol, str[i]); //�·��Ž�ջ 
				}
				/*ջ�����Ų�������')'���ʲ����ж�*/ 
			}
			else if(judge(str[i]) == 3) { //����˷�����'*'��'/'�����ж���ջ�����������ȼ�
				if(judge(Randfuhao(&symbol)) == 1) { //���ջ��������'('���������ջ 
					Infuhao(&symbol, str[i]);
				}
				else if(judge(Randfuhao(&symbol)) == 2) { //���ջ��������'+'��'-'���������ջ
					Infuhao(&symbol, str[i]); //�·��Ž�ջ
				}
				else if(judge(Randfuhao(&symbol)) == 3) { //���ջ��������'*'��'/'�����ջ���� 
					while(symbol.top >= 0 && data.top >= 1) { //ѭ����ջ
						v2 = Putshuju(&data);
						v1 = Putshuju(&data);
						sum = Math(v1, v2, Putfuhao(&symbol));
						Inshuju(&data, sum); //��������ѹ������ջ 
					}
					Infuhao(&symbol, str[i]); //�·��Ž�ջ
				}
			}
			else if(judge(str[i]) == 4) { // ����˷�����')'�����ջ����ֱ������'('
				do { //ѭ����ջֱ������'('
					v2 = Putshuju(&data);
					v1 = Putshuju(&data);
					sum = Math(v1, v2, Putfuhao(&symbol));
					Inshuju(&data, sum); //��������ѹ������ջ 
				}while(judge(Randfuhao(&symbol)) != 1);
				Putfuhao(&symbol); //���������������ʹ'('��ջ 
			} 		
		}
	}
	free(str); //�ͷ��ڴ�ռ�
	while(symbol.top != -1) {
		v2 = Putshuju(&data);
		v1 = Putshuju(&data);
		sum = Math(v1, v2, Putfuhao(&symbol));
		Inshuju(&data, sum);	
	}
	printf("%d", data.data[0]);
	
	return 0;
}