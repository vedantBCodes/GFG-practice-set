/*Given an unsorted array arr[] of size N having both negative and positive integers.
The task is place all negative element at the end of array
without changing the order of positive element and negative element.*/
#include<iostream>
using namespace std;
void movingNegativeElements(int arr[ ],int Asize)
{
    int i,j,temp;
    for(i=0;i<Asize;i++)
    {
        if(arr[i]<0)
        {
            temp=arr[i];
            for(j=i;j<Asize;j++)
            {
                arr[j]=arr[j+1];
            }
            arr[Asize-1]=temp;
        }
    }
    for(i=0;i<Asize;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[20],Asize;
    cout<<"Enter the size of array:";
    cin>>Asize;
    cout<<"Enter "<<Asize<<" array elements containing negative elements:";
    for(int i=0;i<Asize ;i++)
    {
        cin>>arr[i];
    }
    movingNegativeElements(arr,Asize);
}
