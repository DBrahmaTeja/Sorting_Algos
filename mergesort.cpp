#include<iostream>
using namespace std;

void merge(int *arr,int l,int mid,int r)
{
    int temp[r-1+1];
    int i=l,j=mid+1,k=0;
    while(i<=mid and j<=r)
    {
        if(arr[i]<arr[j])
        temp[k++]=arr[i++];
        else
        temp[k++]=arr[j++];
    }
    while(i<=mid)
    temp[k++]=arr[i++];
    while(j<=r)
    temp[k++]=arr[j++];
    for(int i=0;i<=r-l;i++)
    arr[i+l]=temp[i];

}

void mergesort(int *arr,int l,int r)
{
    if(l>=r)
    return;
    int mid=(l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);

}

int main()
{
    int n;
    cout<<"Enter the no.of Elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    mergesort(arr,0,n-1);
    cout<<"Sorted Array is:"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}