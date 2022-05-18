#include<iostream>
using namespace std;
#define n 5

int top = -1;
int a[n];

void push();
void pop();
void display();

void push()
{
	int ele;
	
	if(top >= n-1)
	{
		cout<<"Stack Overflow";
	}
	else
	{
		cout<<"Enter Element:";
		cin>>ele;
		top++;
		a[top] = ele;
	}
}

void pop()
{
	if(top == -1)
	{
		cout<<"Stack Underflow";
	}
	else
	{
		cout<<"Removed Is:-"<<a[top]<<endl;
		top--;
	}
}

void display()
{
	for(int i=top;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{
	while(1)
	{
		cout<<endl;
		cout<<"1.Push"<<endl;	
		cout<<"2.Pop"<<endl;	
		cout<<"3.Display"<<endl;	
		cout<<"4.Exit"<<endl;	
		
		int ch;
		cout<<"Enter Your Choice:-";
		cin>>ch;
		
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:exit(0);
		}
	}	
}
