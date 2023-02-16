#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    //string to upper case
    string s1="skaGuirr";
    for(int i=0;i<s1.size();i++)
    {
        if (s1[i]>='a' && s1[i]<='z')
        {
            s1[i] -=32;
        }
    }
     cout<<s1<<endl;

//string to lower case
     string s2="DKGHDGKdkh";
    for (int i = 0; i < s2.size(); i++)
    {
        if(s2[i]>='A' && s2[i]<='Z')
        {
            s2[i] +=32;
        }
    }
    cout<<s2<<endl;

    //inbuild function to do similar work

    string str="fkhshgj";
    
    transform(str.begin(), str.end(), str.begin(), ::toupper);

    cout<<str<<endl;

    //form the  biggest number from the given numeric string
    string biggest="798";
    sort(biggest.begin(),biggest.end(), greater<int>());

    cout<<biggest<<endl;

//maximum occuring character in string
string maximum="hdvbdjf";
int freq[26];

for(int i=0;i<26;i++)
{
    freq[i]=0;
}

for (int i = 0; i < maximum.size(); i++)
{
    freq[maximum[i]-'a']++;
}

char ans='a';
int maxF=0;
for(int i=0;i<26;i++)
{
    if (freq[i]>maxF)
    {
        maxF=freq[i];
        ans=i+'a';
    }
    
}
    cout<<maxF<<" "<<ans<<endl;
    return 0;
}