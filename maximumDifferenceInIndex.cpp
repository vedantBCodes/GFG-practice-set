/*Given an array Arr[] of N positive integers.
The task is to find the maximum of j - i subjected to the constraint of Arr[i] <= Arr[j].*/
#include<iostream>
using namespace std;
int main()
{
   int arr[20];
    int Asize;
    cout<<"Enter the size of array:";
    cin>>Asize;
    cout<<"Enter "<<Asize<<" array elements:";
    for(int i=0;i<Asize;i++)
    {
        cin>>arr[i];
    }
    cout<<"Entered array elements are:";
    for(int i=0;i<Asize;i++)
    {
        cout<<arr[i]<<" ";
    }
    int x,y=0;
    for(int i=0;i<Asize;i++)
    {
        for(int j=i;j<Asize;j++)
        {
            if(arr[i]<arr[j])
            {
                x=j-i;
            }
            if(x>y)
            {
                y=x;
            }
        }
    }
    cout<<"\nMaximum difference between index is:"<<y;
}
