#include<iostream>
#include<stdlib.h>
#include<locale.h>
using namespace std;
int main (void)
{
	int op;
	do
	{
		setlocale(LC_ALL, "portuguese");
		cout<<endl<<"=============================";
		cout<<endl<<"MINHA REDE";
		cout<<endl<<"-----------------------------";
		cout<<endl<<"1- Curtir";
		cout<<endl<<"2- Encaminhar";
		cout<<endl<<"3- Sair";
		cout<<endl<<"-----------------------------";
		cout<<endl<<"qual a sua opção?"<<endl;
		cin>>op;
		switch(op)
		{
			case 1:
				cout<<endl<<"**curtiu**"<<endl;
				break;
			case 2:
				cout<<"**encaminhar**"<<endl;
				break;
			case 3:
				cout<<"**obrigado pela escolha!**"<<endl;
				op = 0;
				break;
		}
		
	}while(op != 0);
return 0;
} 
