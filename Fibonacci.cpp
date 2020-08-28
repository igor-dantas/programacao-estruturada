#include<stdio.h>
int main()
{
int a, b, auxiliar, i, n;

a = 0;
b = 1;	

printf("Digite um numero: ");
scanf("%d", &n);
printf("Squencia de Fibonacci:\n ");
printf("%d\n", b);


for(i=1; i<n; i++)
{
	auxiliar = a + b;
	a = b;
	b = auxiliar;
	
	
	printf("%d\n", auxiliar);
	}	
	return 0;
}
