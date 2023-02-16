#include<iostream>
using namespace std;

int clear_bit(int n,int pos)
{
    return (n^(1<<pos));
}

int main()
{
    cout<<clear_bit(5,2)<<endl;
    return 0;
}