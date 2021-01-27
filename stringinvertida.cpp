#include<stdio.h>
#include<string.h>
int main()
{
    char x[20];
    int i;
    printf("=========DIGITE UMA PALAVRA COM ATE 20 CARACTERES=========\n :");
    gets(x);
    printf("\nvoce digitou %s\n", x);
    printf("\nA palavra: %s \ninvertida eh:", x);
    for(i = strlen(x)-1; i>=0; i--)
    {
        printf("%c", x[i]);
    }
    return 0;
}