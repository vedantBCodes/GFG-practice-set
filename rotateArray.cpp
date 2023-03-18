#include<iostream>
using namespace std;
int main()
{
    int arr[20],arr2[20];
    int i,j,num,temp,k,Asize;
    cout<<"Enter the size of array:";
    cin>>Asize;
    cout<<"Enter sorted array with "<<Asize<<" array elements:";
    for(i=0;i<Asize;i++)
    {
        cin>>arr[i];
    }
    cout<<"How many times you want to rotate an array:";
    cin>>num;
    j=Asize-num;
    for(i=0;i<num;i++)
    {
        arr2[j]=arr[i];
        j++;
    }
    j=0;
    for(i=num;i<Asize;i++)
    {
        arr2[j]=arr[i];
        j++;
    }
    for(i=0;i<Asize;i++)
    {
        cout<<arr2[i]<<" ";
    }

}
