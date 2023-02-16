#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int first[n];
    for(int i=0;i<=n;i++)
{
    cin>>first[i];
}

for(int i=0;i<=n;i++)
{
    cout<<first[i]<<" ";
}

return 0;
}