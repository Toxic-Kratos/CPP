#include<iostream>
using namespace std;

void display(int array[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }cout<<endl;
}

void insertion_sort(int array[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current=array[i];
        int j=i-1;
        while(array[j]>current && j>=0)
        {
            array[j+1]=array[j];
            j--;
        }
            array[j+1]=current;
    }

}

int main()
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;

    int array[n];
    for(int i=0;i<=n;i++)
    {
        cin>>array[i];
    }

    insertion_sort(array,n);
    display(array,n);
}