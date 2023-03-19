#include<iostream>
using namespace std;
class duplicates
{
private:
    int i,j,k,cnt2=0,arr2[20],z=0;
public:
    process(int arr[20],int Asize);
};
duplicates::process(int arr[20],int Asize)
{
    for(i=0;i<Asize;i++)
    {
        for(j=i+1;j<Asize;j++)
        {
            int cnt=0;
            for(k=i-1;k>=0;k--)
            {
                if(arr[j]!=arr[k])
                    cnt++;
            }
            if(cnt==i)
            {
            if(arr[i]==arr[j])
            {
             arr2[z]=arr[i];
             z++;
            cnt2++;
            break;
            }
            }
        }
    }
    if(cnt2!=0)
    {
        cout<<"Duplicate array elements in an entered array are: ";
        for(i=0;i<z;i++)
        {
          cout<<arr2[i]<<" ";
        }
    }
    else
    {
        cout<<"Entered array has no duplicate element";
    }
}
int main()
{
    int arr[20],x,i;
    cout<<"Enter the size of array:";
    cin>>x;
    cout<<"Enter "<<x<<" array elements:";
    for(i=0;i<x;i++)
    {
       cin>>arr[i];
    }
    duplicates obj;
    obj.process(arr,x);
}
