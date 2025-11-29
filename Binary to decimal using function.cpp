#include<iostream>
#include<math.h>
using namespace std;

int BintoDec(long long n);
int main()
{
    long long n;
    cout<<"Enter a binary number : ";
    cin>>n;
    cout<<n<<" binary = "<<BintoDec(n)<<" decimal";
    return 0;
}
int BintoDec(long long n)
{
    int DecNum =0;
    int i=0;
    int remainder;
    while(n!=0)
    {
        remainder =n%10;
        DecNum +=remainder *pow(2,i);
        n=n/10;
        ++i;
    }
    return DecNum;
}


