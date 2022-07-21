#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no.of Elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        int mind=i;
        for(int j=i;j<n;j++)
        {
           if(arr[mind]>arr[j])
            mind=j; 
        }
        swap(arr[mind],arr[i]);
    }
    cout<<"Sorted Array is:"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}