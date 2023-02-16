#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int counter;

    for(counter=2;counter<n;counter++)
    {
        if(n%counter==0)
        {
            cout<<"Non Prime"<<endl;
            break;
        }
    }

if(counter==n)
{
    cout<<"It is a Prime Number";
}
    return 0;

}