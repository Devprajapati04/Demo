#include<iostream>
using namespace std;

int main()
{
	int i,j,flag=0;
	
	for(i=0;i<=100;i++)
	{
		for(j=2;j<=i/2;i++)
		{
			if(i%j==0)
			{
				cout<<i<<"  ";
				flag=1;
				break;
			}
		}
	}
	
	return 0;
}
