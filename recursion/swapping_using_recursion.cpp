#include <bits/stdc++.h>
using namespace std;
void reverse_array(vector<int> &a ,int l,int r)
{
    if(l>=r)
    return ;
    swap(a[l],a[r]);
    reverse_array(a,l+1,r-1 );
}
int main(){
    vector<int> a ={1,2,3,4,5};
    reverse_array(a,0,a.size()-1);
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<" ";
    }
    return 0;
}