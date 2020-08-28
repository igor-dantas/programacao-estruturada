#include<iostream>
#include<stdlib.h>
#include<locale.h>
using namespace std;
int main (void)
{
	setlocale(LC_ALL,"portuguese");
	int T[4][3], R[4][1], pontosP , pontosR, pontosB, pontosPR, campeao;
	int P[3][1] = {{3},
				   {1},
				   {0}};
	for(int i = 0; i == 0;i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout<<"Diga o número de vitórias, empates e derrrotas do Paydandu respectivamente:";
			cin>>T[i][j];
		}
	}
	
	for(int i =1 ; i == 1;i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout<<"Diga o número de vitórias, empates e derrrotas do Remo respectivamente:";
			cin>>T[i][j];
		}
	}
	
	for(int i =2 ; i == 2;i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout<<"Diga o número de vitórias, empates e derrrotas do Bragantino respectivamente:";
			cin>>T[i][j];
		}
	}
	
	for(int i = 3; i == 3;i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout<<"Diga o número de vitórias, empates e derrrotas do Paragominas respectivamente:";
			cin>>T[i][j];
		}
	}
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"| TIMES      |   VITORIAS    |    EMPATES   |   DERROTAS    |";
	cout<<endl<<"|-----------------------------------------------------------|";
	cout<<endl<<"| PAYSANDU   |"<<T[0][0]<<"             |"<<T[0][1]<<"             |"<<T[0][2]<<"              |"<<endl;
	cout<<"| REMO       |"<<T[1][0]<<"              |"<<T[1][1]<<"             |"<<T[1][2]<<"              |"<<endl;
	cout<<"| BRAGANTINO |"<<T[2][0]<<"              |"<<T[2][1]<<"             |"<<T[2][2]<<"              |"<<endl;
	cout<<"| PARAGOMINAS|"<<T[3][0]<<"              |"<<T[3][1]<<"             |"<<T[3][2]<<"              |"<<endl;
	
	cout<<"============================================================";
	pontosP = T[0][0]*3 + T[0][1]*2;
	pontosR = T[1][0]*3 + T[1][1]*2;
	pontosB = T[2][0]*3 + T[2][1]*2;
	pontosPR= T[3][0]*3 + T[3][1]*2;
	cout<<endl<<"---------------------------------"<<endl;
	cout<<"|TABELA DE PONTOS DO CAMPEONATO	|";
	cout<<endl<<"|-------------------------------|";
	cout<<endl<<"| PAYSANDU   |"<<pontosP<<"                 |"<<endl;
	cout<<"| REMO       |"<<pontosR<<"                 |"<<endl;
	cout<<"| BRAGANTINO |"<<pontosB<<"                 |"<<endl;
	cout<<"| PARAGOMINAS|"<<pontosPR<<"                 |"<<endl;
	if(pontosP>pontosR && pontosP>pontosPR && pontosP>pontosB)
	{
		campeao = pontosP;
		cout<<endl<<"**O GRANDE CAMPEÃO É O PAYSANDU COM: "<<campeao<<" pontos"<<endl;
	}
	else if(pontosR>pontosP && pontosR>pontosPR && pontosR>pontosB)
	{
		campeao = pontosR;
		cout<<endl<<"**O GRANDE CAMPEÃO É O REMO COM: "<<campeao<<" pontos"<<endl;
	}
	else if(pontosB>pontosR && pontosB>pontosPR && pontosB>pontosP)
	{
		campeao = pontosB;
		cout<<endl<<"** GRANDE CAMPEÃO É O BRAGANTINO COM: "<<campeao<<" pontos"<<endl;
	}
	else if(pontosPR>pontosR && pontosPR>pontosP && pontosPR>pontosB)
	{
		campeao = pontosPR;
		cout<<endl<<"** GRANDE CAMPEÃO É O PARAGOMINAS COM: "<<campeao<<" pontos"<<endl;
	}
}
