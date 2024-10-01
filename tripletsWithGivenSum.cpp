/*
Given an array arr of size n and an integer x. Find if there's a triplet in the array which sums up to the given integer x.
Examples

Input:n = 6, x = 13, arr[] = [1,4,45,6,10,8]
Output: 1
Explanation: The triplet {1, 4, 8} in the array sums up to 13.

Input: n = 6, x = 10, arr[] = [1,2,4,3,6,7]
Output: 1
Explanation: Triplets {1,3,6} & {1,2,7} in the array sum to 10. 

Input: n = 6, x = 24, arr[] = [40,20,10,3,6,7]
Output: 0
Explanation: There is no triplet with sum 24. 

*/
#include <iostream>
using namespace std;

int* sortArray(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr;
}
void tripletWithSum(int arr[],int n,int sum)
{
    int targetSum=0;
    for(int i=0;i<n;i++)
    {
        targetSum=sum-arr[i];
       int start=i+1;
       int end=n-1;
       while(start<end)
       {
           int tempSum=arr[start]+arr[end];
           if(tempSum==targetSum)
           {
               cout<<arr[i]<<" "<<arr[start]<<" "<<arr[end]<<endl;
               start++;
               end--;
           }
           else if(tempSum < targetSum)
           {
               start++;
           }
           else
           {
               end--;
           }
           
     }
    }
}
int main() {
    int arr[]={10,5,5,5,2}; 
    int sum=12;
    int n=sizeof(arr)/sizeof(arr[0]);
    int *arr2=sortArray(arr,n);
    tripletWithSum(arr,n,sum);
    return 0;
}