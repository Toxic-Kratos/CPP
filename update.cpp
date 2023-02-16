#include<iostream>
using namespace std;
int update(int n,int pos)
{
    return (n|(1 << pos));
}

int main()
{
    cout<<update(11,2)<<endl;
    return 0;
}