#include<iostream>
using namespace std;
int main()
{
    char  math_operator;
    double firstnum, secondnum;
    cout<<"Enter an operator (+,-,*,/):";
    cin>> math_operator;

    cout<<"Enter two operator :";
    cin>>firstnum;
    cin>>secondnum;

    switch(math_operator)
    {
        cout<<firstnum<<"+"<<secondnum<<"="<<firstnum+secondnum;
        break;
    case '-':
        cout<<firstnum<<"-"<<secondnum<<"="<<firstnum-secondnum;
        break;
    case '*':
        cout<<firstnum<<"*"<<secondnum<<"="<<firstnum*secondnum;
        break;
    case '/':
        cout<<firstnum<<"/"<<secondnum<<"="<<firstnum/secondnum;
        break;
    }
    return 0;
}
