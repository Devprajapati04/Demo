#include<iostream>
using namespace std;
#define n 5

int front = -1;
int rear = -1;
int a[n];

void enqueue();
void dequeue();
void display();

void enqueue()
{
	int ele;
	if(rear >= n-1)
	{
		cout<<"Queue is overflow";
	}
	else
	{
		cout<<"Enter Element";
		cin>>ele;
		
		if(front == -1 && rear == -1)
		{
			front = 0;
			rear = 0;
		}
		else
		{
			rear++;
		}
		a[rear] = ele;
	}
}

void dequeue()
{
	if(rear == -1)
	{
		cout<<"Queue is Underflow";
	}
	else
	{
		cout<<"Removed Is:-"<<a[front]<<endl;
		front++;
	}
}

void display()
{
	if(rear == -1)
	{
		cout<<"Queue is Underflow";
	}
	else
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<a[i]<<" ";
		}
	}
}

int main()
{
	while(1)
	{
		cout<<endl;
		cout<<"1.Enqueue"<<endl;	
		cout<<"2.Dequeue"<<endl;	
		cout<<"3.Display"<<endl;	
		cout<<"4.Exit"<<endl;	
		
		int ch;
		cout<<"Enter Your Choice:-";
		cin>>ch;
		
		switch(ch)
		{
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			case 4:exit(0);
		}
	}	
}
