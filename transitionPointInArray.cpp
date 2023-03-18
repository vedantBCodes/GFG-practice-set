#include<iostream>
using namespace std;
class transitionPoint
{
private:
    int i,j;
public:
    transitionPoint(int arr[20],int Asize)
    {
        for(i=0;i<Asize;i++)
        {
            if(arr[i]==1)
            {
                cout<<i<<" is the transition point in an entered binary array:";
                exit(0);
            }
        }
    }

};
int main()
{
    int x,arr[20],i;
    cout<<"Enter the size of array:";
    cin>>x;
    cout<<"Enter any "<<x<<" binary digits:";
    for(i=0;i<x;i++)
    {
    cin>>arr[i];
    }
    transitionPoint obj(arr,6);
}
