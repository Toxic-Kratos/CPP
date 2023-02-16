#include<iostream>
using namespace std;

int main(){
    int op1,op2;
    cout<<"Enter two operands:";
    cin>>op1>>op2;

char oper;
cout<<"Enter the operation to perform";
cin>>oper;

switch(oper)
{
    case '+': 
    cout<<op1+op2<<endl;
    break;

    case '-': 
    cout<<op1-op2<<endl;
    break;

    case '*': 
    cout<<op1*op2<<endl;
    break;

    default :
    cout<<"Enter another number"<<endl;
}

    return 0;
}