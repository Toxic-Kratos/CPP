#include<iostream>
using namespace std;

int main()
{
    int number,reverse=0,remainder;
    cin>>number;

while (number>0)
{
    remainder=number%10;
    number=number/10;

    //logic applied here
    reverse=(reverse*10)+remainder;
}
     cout<<"The Reverse of Number is:"<<reverse;
    return 0;
}
