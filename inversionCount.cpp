/*
Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. 
If array is already sorted then the inversion count is 0. 
If an array is sorted in the reverse order then the inversion count is the maximum. 

Example 1:
Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3).

Example 2:
Input: N = 5
arr[] = {2, 3, 4, 5, 6}
Output: 0
Explanation: As the sequence is already 
sorted so there is no inversion count.
*/
#include<iostream>
using namespace std;

int inversionCount(int arr[],int Asize)
{
    int cnt=0;
    for(int i=0;i<Asize;i++)
    {
        for(int j=i;j<Asize;j++)
        {
           if(arr[i]>arr[j])
           {
            cnt++;
           }
        }
    }
    return cnt;
}
 
int main()
{
    int arr[20],size;
    cout<<"How many elements you want to take to calculate inversion count:";
    cin>>size;
    cout<<"Enter "<<size<<" elements:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int cnt=inversionCount(arr,size);
    cout<<"Inversion count:"<<cnt;
   return 0;
}