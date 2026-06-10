#include <bits/stdc++.h>
using namespace std;
vector<int> frequencySort(vector<int> &nums)
{
    unordered_map<int,int> mp;
    for(auto it: nums)
    {
        mp[it]++;
    }
    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>> 
        > pq;
    for(auto it=mp.begin(); it!=mp.end();it++)
    {
        pq.push({it->second,-(it->first)});
    }
    vector<int> result;
    while(!pq.empty())
    {
        int f= pq.top().first;
        int val= -(pq.top().second);
        pq.pop();
        for(int i=0;i<f;i++)
        {
            result.push_back(val);
        }   
    }
}
int main(){
    
    return 0;
}