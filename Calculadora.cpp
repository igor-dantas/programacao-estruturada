#include<iostream>
#include<stdlib.h>
#include<locale.h>
using namespace std;
int main(void)
{
	setlocale(LC_ALL,"portuguese");
	int op, A, B, opr;
	do
	{
		cout<<endl<<"==================================="<<endl;
		cout<<"        MINHA CALCULADORA          "<<endl;
		cout<<"==================================="<<endl;
		cout<<"1-OPERAÇÃO DE SOMA"<<endl;
		cout<<"2-OPERAÇÃO DE SUBTRAÇÃO"<<endl;
		cout<<"3-OPERAÇÃO DE MULTIPLICAÇÃO"<<endl;
		cout<<"4-OPERAÇÃO DE DIVISÃO"<<endl;
		cout<<"5-SAIR"<<endl;
		cout<<"==================================="<<endl;
		cout<<"qual sua opção?";
		cin>>op;
		switch(op)
		{
			case 1:
				cout<<"qual o primeiro numero que deseja somar?";
				cin>>A;
				cout<<"qual o segundo numero que deseja somar?";
				cin>>B;
				opr = A + B;
				cout<<A<<"+"<<B<<"="<<opr<<endl;
				break;
			case 2:
				cout<<"qual o primeiro numero que deseja subtrair?";
				cin>>A;
				cout<<"qual o segundo numero que deseja subtrair?";
				cin>>B;
				opr = A - B;
				cout<<A<<"-"<<B<<"="<<opr<<endl;
				break;
			case 3:
				cout<<"qual o primeiro numero que deseja multiplicar?";
				cin>>A;
				cout<<"qual o segundo numero que deseja multiplicar?";
				cin>>B;
				opr = A * B;
				cout<<A<<"*"<<B<<"="<<opr<<endl;
				break;
			case 4:
				cout<<"qual o primeiro numero que deseja dividir?";
				cin>>A;
				cout<<"qual o segundo numero que deseja dividir?";
				cin>>B;
				opr = A / B;
				cout<<A<<"/"<<B<<"="<<opr<<endl;
				break;
			case 5:
				op = 0;
				cout<<"MUITO OBRIGADO PELA ESCOLHA!"<<endl;
				cout<<"==================================="<<endl;
				cout<<"MADE BY: IGOR DANTAS QUINTANILHA"<<endl;
				break;
		}
	}while(op!=0);
}
