#include<iostream>
using namespace std;
main()               //program to convert binary number into decimal number
{
    int a,b,c,d=1,x,y=0,z,no,i,cnt=0;
    cout<<"enter a binary no:";
    cin>>z;
    a=z;
    while(a>0)
    {
        b=a%10;
        cnt++;
        a=a/10;
    }
    for(c=1;c<=(cnt-1);c++)
    {
        d=d*2;
    }
    no=z;
    for(i=1;i<=d;)
    {for(no=z;no>0;no=no/10)
    {
        x=no%10;
        y=y+(x*i);
        i=i*2;
    }
    }
    cout<<"the decimal conversion of binary number "<<z<<" is:"<<y;
}

