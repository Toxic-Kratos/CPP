#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,remainder,sum=0;
    cin>>n;
    int original=n;

    while(n>0)
    {
        remainder=n%10;
        sum=sum + pow(remainder,3);
        n=n/10;
    }

    if(sum==original)
    {
        cout<<"It Is Armstrong Number"<<endl;
    }

    else
    {
        cout<<"It Is Not Armstrong Number"<<endl;
    }
    
    return 0;
}