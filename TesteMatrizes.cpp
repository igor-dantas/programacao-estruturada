#include<iostream>
using namespace std;
int main(void)
{
	int i, j, M1[3][5], M2;
	for(i = 0; i< 3; i++)
	{
		for(j = 0; j < 5; j++)
		{
			cout<<"Digite os elementos da matriz M1"<<"["<<i+1<<"]"<<"["<<j+1<<"]";
			cin>>M1[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			M2 = M1[i][j]/5;
			cout<<M2<<" ";
		}
		cout<<endl;
	}
	return 0;
}
