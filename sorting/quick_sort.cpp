#include<bits/stdc++.h>
using namespace std;
int pivot(vector<int> & a,int low , int high )
{
    int pivot = a[low];
    int i= low;
    int j =high;
    while(i<j)
    {
        while(a[i]<=pivot && i<=high-1)
        {
            i++;
        }
        while(a[j]>=pivot && j>=low+1)
        {
            j--;
        }
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }
        swap(a[low],a[j]);
        return j;
    }
    void quicksort(vector<int>& a , int low , int high )
    {
        if(low<high)
        {
            int Pindex= pivot(a,low,high);
            quicksort(a,low,Pindex-1);
            quicksort(a,Pindex+1,high);
        }
}
int main()
{
    vector<int> a = {4, 6, 2, 5, 7, 9, 1, 3};

    quicksort(a, 0, a.size()-1);

    for(int x : a)
        cout << x << " ";

    return 0;
}