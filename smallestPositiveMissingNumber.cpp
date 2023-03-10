#include<iostream>
using namespace std;
int main()
{
    int arr[ ]={-20,-13,0,1,2,4,43},i,num,j,y,z,cnt1=0,cnt2;
    int smallest_no=0;
    for(i=0;i<7;i++)
    {
        if(arr[i]>=0)
        {
            cnt1++;
            if(arr[i]<smallest_no)
            {
                smallest_no=arr[i];
            }
        }
    }
     int largest_no=0;
    for(i=0;i<7;i++)
    {
        if(arr[i]>=0)
        {
            if(arr[i]>largest_no)
            {
                largest_no=arr[i];
            }
        }
    }
    for(i=smallest_no;i<=largest_no;i++)
    {
        cnt2=0;
        for(j=0;j<7;j++)
        {
            if(arr[j]>=0)
            {
            if(arr[j]!=i)
            {
                cnt2++;
            }
            }
        }
        if(cnt2==cnt1)
        {
            cout<<i<<" is the smallest positive missing number";
            exit(0);
        }
    }
}
