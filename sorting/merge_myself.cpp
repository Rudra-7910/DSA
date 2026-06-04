#include <bits/stdc++.h>
using namespace std;
void merge( vector<int> & a , int low ,int mid ,  int high )
{
    vector<int> temp ;
    int left= low;
    int right=  mid + 1;
    while( low <= mid && right <= high )                //dividing the array in equal parts using binary search type of thing , 
    {
        if(a[left]<=a[right])               //comparing ,a nd pushing the smaller one in , temp array , 
        {
            temp.push_back(a[left]);
            left++ ;
        }
        else
        {
            temp.push_back(a[right]);
            right++;
        }
    }
    while(left<=mid)            //pushing the remaingin , left and rihgt elements into the , temp array 
    {
        temp.push_back(a[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(a[right]);
        right++ ;
    }
    for (int i = low; i <= high; i++) {
        a[i] = temp[i - low];
    }
}
void merge_sort ( vector<int > & a, int low , int high )
{
    if ( low >= high ) return ;
    int mid = (low+high)/2;
    merge_sort(a,low,mid);
    merge_sort(a,mid+1,high);
    merge(a,low,mid,high);
}
int main(){
    
    return 0;
}