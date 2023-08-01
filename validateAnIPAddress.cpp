/*

According to Wikipedia, IPv4 addresses are canonically represented in dot-decimal notation,
 which consists of four decimal numbers, each ranging from 0 to 255, separated by dots, e.g., 172.16.254.1 .
A valid IPv4 Address is of the form x1.x2.x3.x4 where 0 <= (x1, x2, x3, x4) <= 255.

Thus, we can write the generalized form of an IPv4 address as (0-255).(0-255).(0-255).(0-255).

Note: Here we are considering numbers only from 0 to 255 and any additional leading zeroes will be considered invalid.
*/
#include<iostream>
#include<string.h>
using namespace std;

void validIPAddress(char str[])
{
    bool isValid=true;
   int len=strlen(str);
   int k=0;
   int cnt=0;
   char subStr[40];  //An Empty String
   int x;
   for(int i=0;i<=len;i++)
   {
     x=0;
     if((str[i]=='.')||(i==len))
     {
        for(int j=k;j<i;j++)
        {
           subStr[x]=str[j];
            x++;
        }
        subStr[x]='\0';
        int num=stoi(subStr); //stoi() is predefined method to convert a string into an integer
        cnt++;
        if((num<0)||(num>255))
        {
            isValid=false;
        }
        k=i+1;
     }
   }
   if((isValid==true)&&(cnt==4))
   {
     cout<<str<<" is a valid IP address";
   }
   else
   {
    cout<<str<<" is not a valid IP address";
   }
}
int main()
{
    char str[50];
    cout<<"Enter any IPv4 address to check whether it is valid or not:";
    cin.getline(str,40);
    validIPAddress(str);
}