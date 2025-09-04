#include<iostream>
using namespace std;
int main() {
    char op;
    float num1,num2;
    cout<<"Enter first number:";
cin>>num1;
cout<<"Enter operator:";
cin>>op;
cout<<"Enter second number:";
cin>>num2;
switch(op)
{
   case'+': 
    cout<<"Result="<<num1+num2;
    break;
    case'-':
    cout<<"Result="<<num1-num2;
    break;
    case'*':
    cout<<"Result="<<num1*num2;
    break;
    case'/':
    if(num2!=0)
    cout<<"Result="<<num1/num2;
    else
    cout<<"error:division by zero";
    break;
    default:
    cout<<"error:invalid operator";
    }
    return 0;
}
