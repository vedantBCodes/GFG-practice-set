//Given a sorted array of positive integers.
//Your task is to rearrange the array elements alternatively i.e first element should be max value,
//second should be min value, third should be second max, fourth should be second min and so on.
#include<iostream>
using namespace std;
int main()
{
    int arr[20],x,i,j=1,k=0,arr2[20];
    cout<<"How many array elements you want to take:";
    cin>>x;
    cout<<"Enter any "<<x<<" sorted array elements of positive integers:";
    for(i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<((x/2)+1);i++)
    {
            arr2[j]=arr[i];
            j+=2;
    }
    for(i=x-1;i>=x/2;i--)
    {
            arr2[k]=arr[i];
            k+=2;
    }
    for(i=0;i<x;i++)
    {
        cout<<arr2[i]<<" ";
    }
}
