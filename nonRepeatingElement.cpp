#include<iostream>
using namespace std;
int main()
{
    int arr[20],x,i,j;
    cout<<"Enter the size of array:";
    cin>>x;
    cout<<"Enter "<<x<<" array elements:";
    for(i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    cout<<"Non repeating array elements are:";
    for(i=0;i<x;i++)
    {
        int cnt=0;
        for(j=0;j<x;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
            }
        }
        if(cnt==1)
        {
            cout<<arr[i]<<" ";
        }
    }
}
