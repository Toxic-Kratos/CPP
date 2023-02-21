#include<iostream>
using namespace std;
int tribonacci(int n)
{
    if(n==0 || n==1 || n==2 || n==3)
    {
        return n;
    }
    
else
{
    return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
}
}
int main()
{
    cout<<tribonacci(5)<<endl;
    return 0;
}