#include<stdio.h>
int main(void)
{
int tabuada = 1;

printf("Dgite o numero que voce quer saber a tabuada: \n");
scanf("%d", &tabuada);

for(int x = 0;x <= 10; x++)
{
     printf("%d x %d = %d\n", tabuada, x, tabuada * x);
   
}

return 0;

}
