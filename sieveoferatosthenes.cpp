#include<iostream>
using namespace std;

void sieve(int n)
{
    int arr[100]={0};

    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*i;j<=n;j=j+i)
            {
               arr[j]=1; 
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0)
        {
            cout<<i<<" ";
        }
    }cout<<endl;
}

int main()
{
    int n;
    cin>>n;

    sieve(n);
    return 0;
}