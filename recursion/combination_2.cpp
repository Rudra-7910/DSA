#include <bits/stdc++.h>
using namespace std;
void finding_all_combinations(int index, int target , vector<int> & arr, vector<vector<int>>& ans , vector<int> & ds)
{
    if(index==arr.size())
    {
        if(target==0)
        {
            ans.push_back(ds);
        }
        return ;
    }
    if(arr[index]<=target)
    {
        ds.push_back(arr[index]);
        finding_all_combinations(index+1 , target- arr[index],arr, ans, ds);
        ds.pop_back();
    }
    finding_all_combinations(index+1,target,arr,ans,ds);
}
int main() {
    // Input Data
    vector<int> candidates = {2, 3, 6, 7,5};
    int target = 7;

    // Data structures to store results
    vector<vector<int>> ans;
    vector<int> ds;

    // Start Recursion
    finding_all_combinations(0, target, candidates, ans, ds);

    // Printing the final combinations
    cout << "Combinations found for target " << target << ":" << endl;
    
    if (ans.empty()) {
        cout << "No combinations possible." << endl;
    } else {
        for (int i = 0; i < ans.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < ans[i].size(); j++) {
                cout << ans[i][j] << " ";
            }
            cout << "]" << endl;
        }
    }
    return 0;
}
