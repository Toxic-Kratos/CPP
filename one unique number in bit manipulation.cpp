#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the value of array: ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
         cin>>arr[i];
    }

   int ans=0;
   for(int j=0;j<n;j++)
   {
    ans = ans^arr[j];
   }

cout<<ans<<endl;
    return 0;
}