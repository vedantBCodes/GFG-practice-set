/*
Given a binary array A[] of size N. The task is to arrange the array in increasing order.
Note: The binary array contains only 0  and 1.
 
Example 1:

Input: 
5
1 0 1 1 0

Output: 
0 0 1 1 1

Explanation: 
After arranging the elements in 
increasing order, elements will be as 
0 0 1 1 1.
*/

#include <iostream>
using namespace std;
void sortBinaryArray(int arr[],int n)
{
    int left=0;
    int right=n-1;
    while(left < right)
    {
        while(arr[left]==0 && left < right)
        {
            left++;
        }
        while(arr[right]==1 && left < right)
        {
            right--;
        }
        if(left<right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[]={1,0,1,1,0,1,0,0,1,0}; 
    int n=sizeof(arr)/sizeof(arr[0]);
    sortBinaryArray(arr,n);
    return 0;
}