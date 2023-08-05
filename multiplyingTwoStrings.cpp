/*
Given two numbers as strings s1 and s2. Calculate their Product.

Note: The numbers can be negative and You are not allowed 
to use any built-in function or convert the strings to integers. 
There can be zeros in the begining of the numbers.

Example 1:
Input:
s1 = "0033"
s2 = "2"
Output:
66
*/

#include<iostream>
#include<string.h>
using namespace std;
 
int  stringToInteger(char str[])
{
   int strLength=strlen(str);
   int num=0;
   int x;
   for(int i=0;i<strLength;i++)
   {
      x=int(str[i]);  //Here value of x will be the ascii value of str1[i]
      x-=48;  //ASCII value of 0-9 ranges from 48 to 57
      num=x+(num*10);
   }
   return num;
} 
int multiplyingStrings(char str1[],char str2[])
{
   int num1=stringToInteger(str1);
   int num2=stringToInteger(str2);
   return num1*num2;
} 
int main()
{
   char str1[]="00123";
   char str2[]="45";
   int mul=multiplyingStrings(str1,str2);
   cout<<"Product of "<<str1<<" and "<<str2<<" is "<<mul;
   return 0;
}