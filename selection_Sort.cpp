#include<iostream>
using namespace std;

void display(int array[],int n)
{
    for(int i=0;i<n;i++)
    {
    cout<<array[i];
    }cout<<endl;
}

void selection_sort(int array[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[j]<array[i])
            {
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
}



int main()
{
    int n;
    cin>>n;

    int array[n];
    for(int i=1;i<=n;i++)
    {
        cin>>array[i];
    }

selection_sort(array,n);
display(array,n);

}