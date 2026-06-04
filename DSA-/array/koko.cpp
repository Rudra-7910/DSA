#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
#include<limits>
using namespace std;
int maxi(vector<int> & nums)
{
    int max= INT_MIN;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>max)
        {
            max=nums[i];
        }
    }
    return max;
}
int hours(vector<int> a,int hourly)
{
    int hourss=0;
    for(int i=0;i<a.size();i++)
    {
        hourss=hourss+ ceil((double)a[i]/(double) hourly);
        return hourss;
    }
}
int koko (vector<int> v, int limit)
{
    int n=v.size();
    int low=0;
    int high=n-1;
    while(low<high)
    {

    }
}