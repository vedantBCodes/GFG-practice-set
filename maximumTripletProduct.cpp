#include<iostream>
using namespace std;
int main() //This program will find out the maximum possible triplet product of entered numbers
{
    int x,arr[30],i,j,temp,prod=1;
    cout<<"Enter the size of array:";
    cin>>x;
    cout<<"Enter "<<x<<" array elements:";
    for(i=0;i<x;i++)
    cin>>arr[i];
    for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=x-1;i>x-4;i--)
    {
        prod=prod*arr[i];
    }
    cout<<"The maximum possible triplet product is:"<<prod;
}
