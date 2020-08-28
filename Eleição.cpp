#include<iostream>
#include<stdlib.h>
#include<locale.h>
using namespace std;
int main (void)
{
	int op, r1, r2, r3; 
	int cand1 = 0;
	int cand2 = 0 ;
	int cand3 = 0;
	do
	{
		setlocale(LC_ALL, "portuguese");
		cout<<endl<<"|============================================|";
		cout<<endl<<"|              Eleições 2020                 |";
		cout<<endl<<"|============================================|";
		cout<<endl<<"|vote 1: Para o candidato 1                  |";
		cout<<endl<<"|vote 2: Para o candidato 2                  |";
		cout<<endl<<"|vote 3: Para o candidato 3                  |";
		cout<<endl<<"|============================================|";
		cout<<endl<<" qual seu voto? ";
		cin>>op;
		cout<<"|============================================|"<<endl;
		switch(op)
		{
			case 1:
				cand1 = cand1 + 1;
				break;
			case 2:
				cand2 = cand2 + 1;
				break;
			case 3:
				cand3 = cand3 + 1;
				break;
		}
		if(cand1 + cand2 + cand3 == 20)
		{
			op = 0;	
		}
	}while(op != 0);
	r1 = cand1 * 100/20;
	r2 = cand2 * 100/20;
	r3 = cand3 * 100/20;
	cout<<endl<<"candidato 1 está com "<< r1<<" % de votos"<<endl;
	cout<<endl<<"candidato 2 está com "<< r2<<" % de votos"<<endl;
	cout<<endl<<"candidato 3 está com "<< r3<<" % de votos"<<endl;
	if(r1 > r2 && r1 > r3)
	{
		cout<<endl<<"com "<< r1<<"% dos votos, o candidato 1 é o campeão";
	}
	else if(r2 > r1 && r2 > r3)
	{
		cout<<endl<<"com "<< r2<<"% dos votos, o candidato 2 é o campeão";
	}
	else if(r3 > r1 && r3 > r2)
	{
		cout<<endl<<"com "<< r3<<"% dos votos, o candidato 3 é o campeão";
	}
	cout<<endl;
	cout<<endl<<"obrigado pela escolha!";
	cout<<endl<<"made by: IGOR DANTAS QUINTANILHA";
	
}
