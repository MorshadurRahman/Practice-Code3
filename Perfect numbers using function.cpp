#include<iostream>
using namespace std;

int isPerfect(int num);
int printPerfect(int start, int end);
int main()
{
    int start, end;
    cout<<"Enter lower limit to print perfect numbers : ";
    cin>>start;
    cout<<"Enter upper limti to print perfect numbers : ";
    cin>>end;
    cout<<"Here perfect numbers between "<<start<<" to "<<end<<" are : "<<endl;
    printPerfect(start, end);
    return 0;
}
int isPerfect(int num)
{
    int i, sum;
    sum =0;
    for(int i=1; i<num;i++)
    {
        if(num%i ==0)
        {
            sum += i;
        }
    }
    if(sum ==num)
    return 1;
    else
    return 0;
}
int printPerfect(int start, int end)
{
    while(start<=end)
    {
        if(isPerfect(start))
        {
            cout<<start<<" ";
        }
        start++;
    }
}
