#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>fourlet(vector<int>nums,int target)
{
    set<vector<int>>st;
    int n= nums.size();
    for(int i=0;i<n;i++)
    {
        set<int>hashmap;
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                long long sum = (long long)nums[i] + nums[j] + nums[k];
                long long fourth = target - sum;
                if(hashmap.find(fourth)!=hashmap.end())
                {
                    vector<int>temp={nums[i],nums[j],nums[k],(int)fourth};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashmap.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}
int main(){
    vector<int>nums = {1, 0, -1, 0, -2, 2, 2, -1};
    int target = 2;
    fourlet(nums,target);
    return 0;
}