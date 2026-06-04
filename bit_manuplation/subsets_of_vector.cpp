#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>answer(vector<int> &a )
{
    int n= a.size();
    vector<vector<int>> allsubsets;
    int total= 1<<n;
    for(int i=0;i<total;i++)        //masking
    {
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            if(i &(1<<j))
            {
                temp.push_back(a[j]);
            }
        }
        allsubsets.push_back(temp);
    }
    return allsubsets;
}
int main()
{
    vector<int> nums = {10,20,30};

    vector<vector<int>> result = answer(nums);

    for(auto subset : result)
    {
        cout<<"{ ";
        for(int x : subset)
            cout<<x<<" ";
        cout<<"}"<<endl;
    }
}