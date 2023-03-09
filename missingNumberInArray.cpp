#include<iostream>
using namespace std;
int main()
{
    int arr[8]={5,7,4,6,8,1,9,2};
    int i,j,x,num;
    for(i=1;i<=9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(arr[j]==i)
            {
               x=i;
            }
        }
        if(x==i)
        {
            continue;
        }
         num=i;
    }
    cout<<"The missing number is:"<<num;
}
