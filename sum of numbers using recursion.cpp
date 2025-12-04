#include<iostream>
using namespace std;
int sofn(int start, int end);
int main()
{
    int start, end, sum;
    cout<<"Enter lower limit : ";
    cin>>start;
    cout<<"Enter upper limit : ";
    cin>>end;
    sum = sofn(start, end);
    cout<<"Sum of numbers from "<<start<<" to "<<end<< "is : "<<sum;
    return 0;
}
int sofn(int start, int end)
{
    if(start==end)
    return start;
    else
    return start+sofn(start+1,end);
}

