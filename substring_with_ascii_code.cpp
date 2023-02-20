#include<iostream>
using namespace std;

void swac(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);

    swac(ros,ans);
    swac(ros,ans+ch);
    swac(ros,ans + to_string(code));
}
int main()
{
    swac("AB","");
    return 0;
}