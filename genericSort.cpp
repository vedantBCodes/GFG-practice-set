/*
You need to sort elements of an array where the array can be of following data-types:

 1.Integer
 2.Character
 3.floating number
  
The input line contains 2 lines. The first line contains n(size of array) and q(type of array) separated by space.
Below is the description about q.

   q = 1, means elements of the array are of integer type
   q = 2, means elements of the array are of character type
   q = 3, means elements of array are of floating digit type  

The second line contains n elements of the array separated by space.

We have to print the elements in sorted form of given type of array separated by space.
*/
#include<iostream>
using namespace std;
void sortIntArray(int arr1[],int n) //Here arr is array name and n is the size of array
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr1[i]>arr1[j])
            {
                int temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }
    cout<<"Sorted integer array:";
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
}
void sortFloatArray(float arr2[],int n) //Here arr is array name and n is the size of array
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr2[i]>arr2[j])
            {
                float temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }
    cout<<"Sorted floating point array:";
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
}
void sortCharacterArray(char arr3[],int n) //Here arr is array name and n is the size of array
{
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            if(((int)arr3[i])<((int)arr3[j]))
            {
                char temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
     }
     cout<<"Sorted character array:";
     for(int i=0;i<n;i++)
     {
        cout<<arr3[i]<<" ";
     }
}
int main()
{
    int n,q; //Here n is the size of array and q is the type of array
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter the type of array:\n   1 for integer type\n   2 for floating type\n   3 for character type\n----->";
    cin>>q;
    while((q<=1)||(q>=3))
    {
        cout<<"Invalid option"<<endl;
        cout<<"Please enter a valid option"<<endl;
        cout<<"press 1 for integer type\n    2 for floating type\n    3 for character type\n----->";
        cin>>q;
    }
    if(q==1)
    {
        int arr1[10];
        cout<<"Enter any "<<n<<" integer array elements:";
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        sortIntArray(arr1,n);
    }
    else if(q==2)
    {
        float arr2[10];
        cout<<"Enter any "<<n<<" floating point array elements:";
        for(int i=0;i<n;i++)
        {
            cin>>arr2[i];
        }
        sortFloatArray(arr2,n);
    }
    else
    {
        char arr3[10];
        cout<<"Enter any "<<n<<" lowercase characters:";
        for(int i=0;i<n;i++)
        {
            cin>>arr3[i];
        }
        sortCharacterArray(arr3,n);
    }

}
