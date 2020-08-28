#include<iostream>
using namespace std;
int main (void)
{
    int M[10][4], codigo, alunos;
    float av1, av2, av3;
    cout<<"Digite o codigo do aluno: ";
    cin>>codigo;
    cout<<"Digite a nota referente a av1 do codigo acima: ";
    cin>>av1;
    cout<<"Digite a nota referente a av2 do codigo acima: ";
    cin>>av2;
    cout<<"Digite a nota referente a av3 do codigo acima: ";
    cin>>av3;
    while(codigo != 0)
    {
  		if(codigo < 1 || codigo > 10)
           	cout<<"CODIGO INVALIDO!";
        else if(codigo = 1)
		{
        	M[0][0] = codigo;
            M[0][1] = av1;
            M[0][2] = av2;
            M[0][3] = av3;
            alunos = codigo;
        }
        else if(codigo = 2)
        {
			M[1][0] = codigo;
            M[1][1] = av1;
            M[1][2] = av2;
            M[1][3] = av3;
            alunos = codigo;
        }
        else if(codigo = 3)
        {
            M[2][0] = codigo;
            M[2][1] = av1;
            M[2][2] = av2;
            M[2][3] = av3;
            alunos = codigo;
        }
        else if(codigo = 4)
        {
			M[3][0] = codigo;
            M[3][1] = av1;
            M[3][2] = av2;
            M[3][3] = av3;
            alunos = codigo;
        }
        else if (codigo = 5)
        {
            M[4][0] = codigo;
            M[4][1] = av1;
            M[4][2] = av2;
            M[4][3] = av3;
            alunos = codigo;
        }
        else if (codigo = 6)
        {
            M[5][0] = codigo;
            M[5][1] = av1;
            M[5][2] = av2;
            M[5][3] = av3;
            alunos = codigo;
        }
        else if(codigo = 7)
        {
            M[6][0] = codigo;
            M[6][1] = av1;
            M[6][2] = av2;
            M[6][3] = av3;
            alunos = codigo;
        }
        else if(codigo = 8)
        {
            M[7][0] = codigo;
            M[7][1] = av1;
            M[7][2] = av2;
            M[7][3] = av3;
            alunos = codigo;
        }
        else if (codigo = 9)
        {
            M[8][0] = codigo;
            M[8][1] = av1;
            M[8][2] = av2;
            M[8][3] = av3;
            alunos = codigo;
        }
        else if(codigo = 10)
        {
            M[9][0] = codigo;
            M[9][1] = av1;
            M[9][2] = av2;
            M[9][3] = av3;
            alunos = codigo;
        }
    }
    return 0;
}
