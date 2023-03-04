#include<iostream>
using namespace std;
class leader //An element of array is leader if it is greater than or equal to all the elements to its right side.
{                    // The rightmost element is always a leader.
private:
    int arr[20];
    int i,j,cnt;
public:
    process()
    {
        cout<<"Leaders in a given array are:";
    int  arr[20]={16,17,3,5,2};
        for(i=0;i<5;i++)
        {
            cnt=0;
            for(j=i+1;j<5;j++)
            {
                if(arr[i]>arr[j])
                {
                    cnt++;
                }
            }
                if(cnt==(5-i-1))
                {
                    cout<<arr[i]<<" ";
                }

            }
        }
};
int main()
{
    leader obj;
    obj.process();
}

