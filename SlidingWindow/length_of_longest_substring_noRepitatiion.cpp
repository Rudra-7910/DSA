#include <bits/stdc++.h>
using namespace std;
int length(string s)
{
    unordered_map<char,int> mp;
    int left=0;
    int ans=0;
    int right=0;
    while(right<s.size()-1)
    {
        mp[s[right]]++;
        while(mp[s[right]]>1)
        {
            mp[s[left]]--;
            left++;
        }
        ans= max(ans,right-left+1);
        right++;
    }
    return ans;
}
int main(){
    
    return 0;
}