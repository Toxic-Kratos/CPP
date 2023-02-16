#include<iostream>
using namespace std;

void display(int array[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }cout<<endl;
}
 

void bubble_sort(int array[],int n)
{
    int counter=1;
    while(counter<n)
    {
    for(int i=0;i<=n-counter;i++)
        {
            if(array[i]>array[i+1])
            {
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
             }
        }
        counter++;
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

bubble_sort(array,n);
display(array,n);
}