#include<iostream>
using namespace std;
void selection_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                swap(a[min],a[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        std::cout<<a[i];
    }
}
int main () 
{
    int n=5;
    int a[]={5,4,3,2,1};
    selection_sort(a,n);
    return 0;
}