#include<map>
#include<vector>
#include<iostream>
using namespace std;
int main () 
{
    vector<int> a={1,1,5,5,5,5,5,5,5,5,5,5,5,5,5,1,1,2,2,2,2};
    map<int ,int > mpp;
    for ( int i=0;i<a.size();i++)
    {
        mpp[a[i]]++;
    }
    for(auto it:mpp)
    {
        if(it.second>(a.size()/2))
    {
        cout<<it.first<<" "<< "printing "<< it.second<<" "<<"times";
    }
    }

}