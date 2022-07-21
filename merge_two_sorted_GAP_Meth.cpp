//sc:O(1)
#include<iostream>
#include<math.h>
using namespace std;

void merge(int arr1[],int arr2[],int n,int m)
{
    int g=ceil((n+m)/2);
    for(int gap=g;gap>0;gap--)
    {
        int st=0;
        int end=st+gap;
        while(end<n+m)
        {
            if(end>n-1)
            {
                if(st<n)
                {
                    int k=(end%n)+(end/n)-1;
                    if(arr1[st]>arr2[k])
                    swap(arr1[st],arr2[k]);
                }
                if(st>n-1)
                {
                    int k1=(st%n)+(st/n)-1;
                    int k2=(end%n)+(end/n)-1;
                    if(arr2[k1]>arr2[k2])
                    swap(arr2[k1],arr2[k2]);
                }
            }
            else
            {
                if(arr1[st]>arr1[end])
                swap(arr1[st],arr1[end]);
            }
            st++;
            end++;
        }
    }

}

int main()
{
    int n,m;
    cout<<"Enter the no.of Elements"<<endl;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++)
    cin>>arr1[i];
     for(int i=0;i<m;i++)
    cin>>arr2[i];
    
    merge(arr1,arr2,n,m);

    cout<<"Sorted Array is:"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr1[i]<<" ";
    cout<<endl;
    for(int i=0;i<m;i++)
    cout<<arr2[i]<<" ";
    cout<<endl;
}
//TC: O((n+m)log(n+m))