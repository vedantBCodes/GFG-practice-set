/*Given an array arr[] of N non-negative integers representing the height of blocks.
If width of each block is 1,
compute how much water can be trapped between the blocks during the rainy season.*/
#include<iostream>
using namespace std;
void trappingRainWater(int arr[ ],int x)
{
    int i,temp,sum=0;
   if(arr[0]<arr[x-1])
   {
       temp=arr[0];
   }
   else
   {
    if(arr[x-1]<arr[0])
       {
           temp=arr[x-1];
       }
    else
       {
           temp=arr[0];
       }
   }
    for(i=1;i<(x-1);i++)
    {
        if(arr[i]<temp)
        {
           sum=sum+(temp-arr[i]);
        }
    }
    cout<<"Output:"<<sum;
}
int main()
{
    int arr[20],Asize;
    cout<<"Enter the size of array:";
    cin>>Asize;
    for(int i=0;i<Asize;i++)
    {
        cin>>arr[i];
    }
    trappingRainWater(arr,Asize);
}
