/*
Given two strings str1 and str2. 
The task is to check if str2 is a rotated version of the string str1. 
The characters in the strings are in lowercase.

Example 1:
Input:
geeksforgeeks
forgeeksgeeks
Output: 1
Explanation: s1 is geeksforgeeks, s2 is
forgeeksgeeks. Clearly, s2 is a rotated
version of s1 as s2 can be obtained by
left-rotating s1 by 5 units.
*/

#include<iostream>
#include<string.h>
using namespace std;

char* shiftingCharactersByOne(char str[])
{
    int strLength = strlen(str);
    int temp = str[0];
    for (int j = 0; j < strLength; j++)
    {
        str[j] = str[j + 1];
    }
    str[strLength - 1] = temp;
    return str;
}
bool stringCompair(char str1[],char str2[])
{
    if(strlen(str1)==strlen(str2))
    {
        for(int i=0;i<strlen(str1);i++)
        {
            if(str1[i]!=str2[i])
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}
bool areRotations(char str1[],char str2[])
{
    int len1=strlen(str1);
    int len2=strlen(str2);
    bool check=false;
    if(len1==len2)
    {
    for(int i=0;i<len1;i++)
    {
        char *strTemp=shiftingCharactersByOne(str1);
       if(stringCompair(strTemp,str2)==true)
       {
        check=true;
       }
    }
    }
    else
    {
        check=false;
    }
    return check;
}

int main()
{
    char str1[]="geeksforgeeks";
    char str2[]="forgeeksgeeks";
    bool check=areRotations(str1,str2);
    if(check==1)
    {
        cout<<str2<<" is a rotated version of "<<str1;
    }
    else
    {
        cout<<str2<<" can never be a rotated version of "<<str1;
    }
   return 0;
}