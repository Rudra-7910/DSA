#include <bits/stdc++.h>
using namespace std;
void subset_1(int index , int sum , int arr[] , int n , vector<int> & ans)
{
    if(index ==n )
    {
        ans.push_back(sum);
        return ;
    }
    //pick the element 
    subset_1(index+1, sum+arr[index] , arr, n , ans);
    //do not pick the elemnet 
    subset_1(index+1 , sum , arr , n , ans);
}
int main(){
    int n=3;
    int a[3]= {3,2,1};
    vector<int> ans;
    subset_1(0,0,a,3,ans);  //picked element
    for(int i = 0; i < ans.size(); i++){
    cout<<ans[i]<<" ";
}
    return 0;
}