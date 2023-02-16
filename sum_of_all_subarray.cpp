#include<iostream>
using namespace std;

void search_arr(int array[],int n)
{
    int current=0;
    for(int i=0;i<n;i++)
    {
        current=0;
        for(int j=i;j<n;j++)
        {
                current=current+array[j];
                cout<<current<<endl;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    search_arr(array,n);
    
}