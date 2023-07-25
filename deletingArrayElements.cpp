/*
Delete array elements which are smaller than next or become smaller
Given an array arr[] and a number k. 
The task is to delete n elements which are smaller than next element 
or become smaller than next because next element is deleted.

Input : arr[ ] = {20, 10, 25, 30, 40} 
        and K = 2
Output : 25 30 40

Input :arr[ ] = {50, 45, 37, 40, 38, 55, 70}
        and k = 2
Output : 50 45 40 55 70
*/
#include<iostream>
using namespace std;
void deleteArrayElements(int arr[],int Asize,int n)
{
    int cnt=0;
    for(int i=0;i<Asize;i++)
    {
       if(arr[i]<arr[i+1])
       {
        for(int j=i;j<Asize;j++)
        {
            arr[j]=arr[j+1];
        }
         i=-1;
         cnt++;
        Asize--;
       }
        
    if(cnt==n)
       {
        break;
       }
    }
    cout<<"The remaining array elements are:";
    for(int i=0;i<Asize;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[20],size,n;
    cout<<"Enter the size of array:";
    cin>>size;
    cout<<"Enter any "<<size<<" array elements:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"how many array elements you want to delete:";
    cin>>n;
    deleteArrayElements(arr,size,n);
}
