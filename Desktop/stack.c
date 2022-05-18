#include<stdio.h>

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
		printf("Stack Overflow");
	}
	else
	{
		printf("Enter Element:");
		scanf("%d",&ele);
		top++;
		a[top] = ele;
	}
}

void pop()
{
	if(top == -1)
	{
		printf("Stack Underflow");
	}
	else
	{
		printf("\nRemoved Is:-",a[top]);
		top--;
	}
}

void display()
{
	for(int i=top;i>=0;i--)
	{
		printf(a[i]," ");
	}
}

void main()
{
	while(1)
	{
		printf("1.Push\n");	
		printf("2.Pop\n");	
		printf("3.Display\n");	
		printf("4.Exit\n");	
		
		int ch;
		printf("Enter Your Choice:-");
		scanf("%d",&ch);
		
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
