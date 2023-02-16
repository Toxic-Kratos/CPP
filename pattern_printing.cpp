#include<iostream>
using namespace std;

int main()
{
    int rows,column;
    cin>>rows>>column;

    for(int counter=1;counter<=rows;counter++)
    {
        for(int counter1=1;counter1<=column;counter1++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}