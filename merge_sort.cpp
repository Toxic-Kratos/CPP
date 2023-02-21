#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1];
    int b[n2];
}
void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}

int main()
{
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"Enter the value of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=arr[0];
    int r=arr[n-1];
    return 0;
}

//STILL SOME FUNCTION ARE LEFT TO BE WRITTEN