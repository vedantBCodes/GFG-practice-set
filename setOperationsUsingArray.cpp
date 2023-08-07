/*
Given two arrays arr1 and arr2 of size N and M which contains all the unique elements. 
Perform set operation i.e union, intersection and difference on these arrays. 

Example 1:

nput: N = 4, M = 5
arr1[] = {1, 2, 3, 4}
arr2[] = {3, 4, 5, 6, 7}
Output:
Union:1 2 3 4 5 6 7
Intersection:3 4
Difference:1 2
*/

#include<iostream>
using namespace std;
 
void unionOperation(int arr1[],int arr2[],int m,int n)
{
   for(int i=0;i<m;i++)
   {
    int cnt=0;
    for(int j=0;j<n;j++)
    {
        if(arr1[i]==arr2[j])
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
       arr2[n]=arr1[i];
       n++;
    }
   }
   for(int i=0;i<n;i++)
   {
    cout<<arr2[i]<<" ";
   }
}

void IntersectionOperation(int arr1[],int arr2[],int m,int n)
{
     int arr[10],x=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
            {
                arr[x]=arr1[i];
                x++;
            }
        }
    }
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void differenceOperation(int arr1[],int arr2[],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr1[i]==arr2[j])
            {
                for(int k=i;k<m;k++)
                {
                    arr1[k]=arr1[k+1];
                }
                m--;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        cout<<arr1[i]<<" ";
    }
}
int main()
{
    int m=4,n=5;
    int arr1[]={1, 2, 3, 4};
    int arr2[]={3, 4, 5, 6, 7};
    cout<<"Union :";
    unionOperation(arr1,arr2,m,n);
    cout<<endl;
    cout<<"Intersection :";
    IntersectionOperation(arr1,arr2,m,n);
    cout<<endl;
    cout<<"Difference (arr1-arr2):";
    differenceOperation(arr1,arr2,m,n);
   
   return 0;
}