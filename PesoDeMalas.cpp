#include<iostream>
using namespace std;
int main (void)
{
	float M[5];
	float soma = 0;
	for(float i=0;i<5;i++)
	{
		cout<<"Diga o peso da mala do "<<i+1<<"o passageiro: ";
		cin>>M[5];
		soma = soma + M[5];
	}
		cout<<"A soma dos pesos das malas eh "<<soma<<" kg";	
	return 0;
}
