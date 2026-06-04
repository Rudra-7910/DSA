#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main () 
{
int n=5;
int arr1[]={5,4,3,2,1};
bubblesort(arr1,n);
return 0;
}
