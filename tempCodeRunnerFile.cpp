#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str="ambar";

    cout<<str<<endl;

//printing n times character
    string str1(3,'n');
    cout<<str1<<endl;

//sentence with spaces
//string str2;
//getline(cin,str2);
//cout<<str2<<endl;

//appending two string
string str3="fam";
string str4="ily";
cout<<str3+str4<<endl;

cout<<str3.append(str4)<<endl;

//accessing character of string
cout<<str3[2]<<endl;

//for clearing the string
string abc="hello india";
abc.clear();

//comparing two string
string s1="abc";
string s2="xyz";
cout<<s1.compare(s1)<<endl;

//to check string is empty or not
string s3="abc";
if(!s3.empty())
    cout<<"string is empty"<<endl;

//erase function
string s4="nincompoop";
s4.erase(0,3);
cout<<s4<<endl;

//finding position in string(substring)
string s5="nincompoop";
cout<<s5.find("com")<<endl;

//insert function
string s6="lol";
cout<<s6.insert(2,"mc")<<endl;

//legth function
cout<<s6.size()<<endl;

//iterating in string
for (int i = 0; i < s6.size(); i++)
{
    cout<<s6[i]<<endl;
}

//getting substring
string s7=s5.substr(6,4);
cout<<s7<<endl;

//string to integer
string s8="786";
int x= stoi(s8);
cout<<x+2<<endl;

//transform integer to string
int y=783;
cout<<to_string(x)+"2"<<endl;

//sorting string
//include algorithm header file
string s10="loveindia";
sort(s10.begin(), s10.end());
cout<<s10<<endl;

    return 0;
}