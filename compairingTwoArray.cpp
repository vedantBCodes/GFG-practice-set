/*Given two arrays arr1 and arr2 of equal size 5, the task is to find if given arrays are equal or not.
Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.
Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.*/
#include<iostream>
using namespace std;
class compair
{
private:
    int arr1[20],arr2[20];
    int i,j,temp;
public:
    process()
    {
    int arr1[] = {1,2,6,4,0};
    int arr2[] = {2,4,6,0,1};
        for(i=0;i<5;i++)
        {
            for(j=i+1;j<5;j++)
            {
                if(arr1[i]<arr1[j])
                {
                    temp=arr1[i];
                    arr1[i]=arr1[j];
                    arr1[j]=temp;
                }
            }
        }
         for(i=0;i<5;i++)
        {
            for(j=i+1;j<5;j++)
            {
                if(arr2[i]<arr2[j])
                {
                    temp=arr2[i];
                    arr2[i]=arr2[j];
                    arr2[j]=temp;
                }
            }
        }
         for(i=0;i<5;i++)
        {
                if(arr1[i]!=arr2[i])
                {
                   cout<<"The two given array are not equal";
                   exit(0);
                }
        }
        cout<<"The two given array are equal";
        }
};
int main()
{
    compair obj;
    obj.process();
}


