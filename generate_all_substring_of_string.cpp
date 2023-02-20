#include<iostream>
using namespace std;

void gasos(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);

    gasos(ros,ans);
    gasos(ros,ans+ch);
}
int main()
{
    gasos("ABC","");
    cout<<endl;
    return 0;
}