#include<iostream>
#include<vector>
using namespace std;
int missing_element(vector<int> a , int k )
{
    int low=0;
    int high=a.size()-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int missing = a[mid]-(mid+1);
        if(missing>k)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return k+high+1;
}
int main () 
{
    vector<int>a = {4,7,9,10};
    int result= missing_element(a,4);
    cout<<result;
    return 0;
}