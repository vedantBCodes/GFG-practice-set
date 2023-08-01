/*
Given a string S, 
find the length of the longest substring without repeating characters.

Example 1:
Input:
S = "geeksforgeeks"
Output:7

Explanation:Longest substring is "eksforg".

Example 2:
Input:
S = "abdefgabef"
Output:6
Explanation:Longest substring are "abdefg" , "bdefga" and "defgab".
*/

#include<iostream>
#include<string.h>
using namespace std;

int longestSubString(char str[])
{
    int k;
    int longestLength=0;
    int tempLength;
    bool check;
    int len=strlen(str);
    bool lastCharCheck;
    for(int i=0;i<len;i++)
    {
        tempLength=0;
        check=true;
        for(int j=(i+1);j<len;j++)
        {
             for(k=i;k<j;k++)
                {
                    for(int l=(k+1);l<j;l++)
                    {
                        if(str[k]==str[l])
                        {
                            check=false;
                        }
                    }
                }
                lastCharCheck=false;
                if(check==true)
                    {
                        for(int z=0;z<len-1;z++)
                        {
                           if(str[z]==str[len-1])
                        {
                           lastCharCheck=true;
                        }    
                        }
                       if((i==0)&&(k==(len-1))&&(lastCharCheck!=true))
                       {
                         k=k+1;
                       }
                       tempLength=(k-i);
                        if(tempLength>longestLength)
                        {
                            longestLength=tempLength;
                        }
                    }
        }
    }
    return longestLength;
}

int main()
{
    char str[50]="geeksforgeeks";
   /* cout<<"Enter a string:";
    cin.getline(str,40);*/
    int len=longestSubString(str);
    cout<<"The length of the longest substring with non-repeating characters are:"<<len;
}