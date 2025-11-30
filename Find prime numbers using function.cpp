#include<iostream>
using namespace std;

int isPrime(int num);
void printprimes(int lower, int upper);
int main()
{
    int lower, upper;
    cout<<"Enter the lower limit to list primes : ";
    cin>>lower;
    cout<<"Enter the upper limit to list primes : ";
    cin>>upper;
    printprimes(lower,upper);
}
void printprimes(int lower, int upper)
{
    cout<<"List of prime numbers between "<<lower<<" and "<<upper<<" are : "<<endl;
     while (lower<=upper)
     {
        if(isPrime(lower))
        {
            cout<<lower<<endl;
        }
        lower++;
     }
}
int isPrime(int num)
{
    int i;
    for(i=2;i<=num/2;i++)
    {
      if(num%i ==0)
      {
          return 0;
      }
    }
    return 1;
}







