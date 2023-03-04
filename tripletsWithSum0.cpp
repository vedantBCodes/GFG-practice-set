#include<iostream>
using namespace std;
class triplets
{
private:
    int arr[20],i,j,k,num,cnt;
public:
     input()
    {
        cout<<"How many numbers you want to take:";
        cin>>num;
        cout<<"Enter "<<num<<" numbers:";
        for(i=0;i<num;i++)
        {
            cin>>arr[i];
        }
    }
    result()
    {
        cnt=0;
        for(i=0;i<num;i++)
        {
            for(j=i+1;j<num;j++)
            {
                for(k=i+2;k<num;k++)
                {
                if(arr[i]+arr[j]+arr[k]==0)
                {
                    cnt++;
                }
                }
            }
        }
        if(cnt>0)
        {
        cout<<"The number of triplets whose sum is ZERO are:"<<cnt;
        }
        else
        {
        cout<<"No triplet with sum ZERO";
        }
    }

};
int main()
{
    triplets obj;
    obj.input();
    obj.result();
}
