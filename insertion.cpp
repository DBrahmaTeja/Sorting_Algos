#include<iostream>
using namespace std;
/*
void insertionSort(int *array, int size) {
   int key, j;
   for(int i = 1; i<size; i++) {
      key = array[i];//take value
      j = i;
      while(j > 0 && array[j-1]>key) {
         array[j] = array[j-1];
         j--;
      }
      array[j] = key;   //insert in right place
   }
}
*/
int main()
{
    int n;
    cout<<"Enter the no.of Elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    //inserting each element into a sorted array.
    //suppose K elements are sorted in a array adding k+1th  element in the sorted array
    /*
   int k=n-1;
        for(int i=k-1;i>=0;i--)
        {
            if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
        }
      
    */
   for(int i=0;i<n-1;i++)
   {
    for(int j=i;j>=0;j--)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            else
            break;
        }
   }
    cout<<"Sorted Array is:"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}