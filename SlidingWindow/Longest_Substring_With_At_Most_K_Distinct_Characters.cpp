#include <bits/stdc++.h>
using namespace std;
int longest_substring( string s , int k)
{
    int left=0;
    unordered_map<char,int> mp;
    int right= 0;
    int ans=0;
    while(right<s.size())
    {
        mp[s[right]]++;
        while(mp.size()>k)
        {
            mp[s[left]]--;
            if(mp[s[left]]==0)
            {
                mp.erase(s[left]);
            }
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