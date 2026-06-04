#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int> pages_array,int assumed, int given)
{
    int count =1;
    int sum=0;
    for(int i=0;i<pages_array.size();i++)
    {
        if (sum+pages_array[i]>assumed)
        {
            count=count+1;
            sum=pages_array[i];
        }
        else{
            sum=sum+pages_array[i];
        }
    }
    if(count>given)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int maxi ( vector<int>&a )
{
    int max=INT_MIN;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int sumi(vector<int> a)
{
    int sum=0;
    for(int i=0;i<a.size();i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
int binary_search(vector<int> pages_array,int given)
{
    int low=maxi(pages_array);
    int high=sumi(pages_array);
    while(high>=low)
    {
        int assumed=(low+high)/2;
        if(ispossible(pages_array,assumed,given)==true)
        {
            //ans=assumed;
            high =assumed-1;
        }
        else{
            low=assumed+1;
        }
    }
    return low;
}
int main()
{
    vector<int> books = {12, 34, 67, 90};
    int students = 2;

    cout << binary_search(books, students);
    return 0;
}