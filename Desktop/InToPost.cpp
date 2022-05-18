#include<iostream>
#include<string>
#define MAX 20
using namespace std;

char stk[20];
int top = -1;

bool isEmpty(){
    return top == -1;
}
bool isFull(){
    return top == MAX - 1;
}

char peek(){
    return stk[top];
}
void push(char oper){
    if(isFull())
        cout << "Stack Full!!!!";
   
    else{
        top++;
        stk[top] = oper;
    }
}
char pop(){
    if(isEmpty())
        cout << "Stack Empty!!!!"; 
    else{ 
        char ch = stk[top]; 
        top--; return(ch); 
    } 
    return 0; 
} 
int priority (char alpha)
{ 
    if(alpha == '+' || alpha =='-') 
    {
        return 1; 
    }
    if(alpha == '*' || alpha =='/') 
    {
        return 2; 
    }
    if(alpha == '^') 
    {
        return 3; 
    }

    return 0; 
} 

string convert(string infix) 
{ 
    int i=0; 
    string postfix = ""; 

    while(infix[i]!='\0') 
    { 

        if(infix[i]>='a' && infix[i]<='z'|| infix[i]>='A'&& infix[i]<='Z')          
        {
            postfix += infix[i];
            i++;
        }
        else if(infix[i]=='(')
        {
            push(infix[i]);
            i++;
        }

        else if(infix[i]==')')
        {
            while(stk[top]!='(')
                postfix += pop();
                
            pop();
            i++;
        }
        else            
        {
            while (!isEmpty() && priority(infix[i]) <= priority(peek())){
                postfix += pop();
            }
            push(infix[i]);
            i++;
        }
    }
    while(!isEmpty()){
        postfix += pop();
    }


    cout << "Postfix is : " << postfix; 
    return postfix;
}

int main()
{
    string infix = "a*b+c-d+e"; 
    string postfix;
    postfix = convert(infix);
    
    return 0;
}
