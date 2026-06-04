#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>triplet(int n, vector<int> &nums)
{
    set<vector<int>> st;        //ignore unique
    for(int i = 0; i < n; i++){
        set<int> hashset;
        for(int j = i+1; j < n; j++){
            int third=-(nums[i]+nums[j]);
            if(hashset.find(third)!=hashset.end())
            {
            vector<int> temp= {nums[i],nums[j],third};
            sort(temp.begin(),temp.end());
            st.insert(temp);
        }
        hashset.insert(nums[j]);
    }
    }
}
int main(){
    
    return 0;
}