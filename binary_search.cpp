#include<iostream>
using namespace std;

int binary_search(int array[],int n,int key)
{
int low=0;
int high=n;

    while(low<=high)
    {
    int mid=(low+high)/2;
    if(array[mid]==key)
    {
        return mid;
    }
    else if(array[mid]>key)
    {
        high=mid-1;
    }
    else
    {
        low=mid+1;
    }
}
return -1;
}



int main()
{
    int n;
    cin>>n;

    int array[n];
    for(int i=0;i<=n;i++)
    {
        cin>>array[i];
    }
    
    int key;
    cin>>key;

cout<<binary_search(array,n,key)<<endl;

    return 0;
}