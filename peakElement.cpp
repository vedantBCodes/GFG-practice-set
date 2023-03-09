#include<iostream>
using namespace std;
int main()
{
    int arr[ ]={5,3,6,8,2,4},max_no,i,x;
    max_no=arr[i];
    for(i=0;i<6;i++)
    {
        if(arr[i]>max_no)
        {
            max_no=arr[i];
            x=i;
        }
    }
    cout<<"Peak number is at index:"<<x;
}
