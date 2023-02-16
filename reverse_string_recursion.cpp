#include<iostream>
using namespace std;

void revstring(string s)
{
    if(s.length()==0)
    {
        return;
    }

    string ros=s.substr(1);
    revstring(ros);
    cout<<s[0];
}

int main(){
    revstring("binod");
    return 0;
}