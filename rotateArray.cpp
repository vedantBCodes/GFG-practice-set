#include<iostream>
using namespace std;
int main()
{
    int arr[ ]={1,2,3,4,5,6};
    int i,j=0,num,temp;
    //cout<<"How many times you want to rotate an array:";
  //  cin>>num;
        for(i=0;i<6;i++)
        {
        temp=arr[i];
        arr[i]=arr[i+1];
       // arr[i+1]=arr[j];
        if(i==0)
        {
            arr[4]=temp;
        }
        else
        {
            arr[i-1]=temp;
        }
        }
    for(i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
}
