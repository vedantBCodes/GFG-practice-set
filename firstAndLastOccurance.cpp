#include<iostream>
using namespace std;
class occurance
{
private:
    int arr[20],num,x,y,i;
public:
    process()
    {
         int arr[ ]={1,2,3,4,2,3,2,4};
        cout<<"Enter a number you want to check:";
        cin>>num;
        for(i=0;i<8;i++)
        {
            if(arr[i]==num)
            {
                x=i;
                break;
            }
        }
         for(i=0;i<8;i++)
        {
            if(arr[i]==num)
            {
                y=i;
            }
        }
        cout<<"first occurance of "<<num<<" is at index "<<x;
        cout<<" and last occurance is at index "<<y;
    }
};
int main()
{
    occurance obj;
    obj.process();
}
