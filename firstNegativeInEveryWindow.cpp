/*
First negative in every window of size k 

Given an array A[] of size N and a positive integer K, find the 
first negative integer for each and every window(contiguous 
subarray) of size K.

N = 5
A[] = {-8, 2, 3, -6, 10}
K = 2
Output : 
-8 0 -6 -6

Explanation :
First negative integer for each window of size k
{-8, 2} = -8
{2, 3} = 0 (does not contain a negative integer)
{3, -6} = -6
{-6, 10} = -6

Input : 
N = 8
A[] = {12, -1, -7, 8, -15, 30, 16, 28}
K = 3
Output :
-1 -1 -7 -15 -15 0 

*/
#include <iostream>
using namespace std;

void firstNegativeInEachWindow(int arr[], int n, int k)
{
    for(int i=0;i<=n-k;i++)
    {
        bool check=false;
        int firstNegInt=0;
        for(int j=i;j<(i+k);j++)
        {
            if(arr[j]<0)
            {
                cout<<arr[j]<<" ";
                check=true;
                break;
            }
        }
        if(check==false)
        {
            cout<<"0 ";
        }
    }
}
int main() {
    int arr[]= {12, -1, -7, 8, -15, 30, 16, 28};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    firstNegativeInEachWindow(arr,n,k);
    return 0;
}