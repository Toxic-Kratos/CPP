#include<iostream>
using namespace std;

int main(){

    int start,end;
    cin>>start>>end;
    int counter;
    int i;

    for(counter=start;counter<=end;counter++)
    {
        for(i=2;i<counter;i++)
        {
        if(counter%i==0)
        {
            break;
        }
        }
        
    if(i==counter)
    {
        cout<<counter<<endl;
    }

    }
    return 0;
}