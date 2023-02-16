#include<iostream>
using namespace std;

int main(){
   
    for(int counter=0;counter<=100;counter++)
    {
        if(counter%3==0)
        {
            continue;
        }
        cout<<counter<<endl;
    }

    return 0;
}