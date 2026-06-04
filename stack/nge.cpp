#include <bits/stdc++.h>
using namespace std;
vector<int> nge (vector<int> &a )
{
    int n= a.size();
    vector<int>nge;
    stack<int> st;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && st.top()<a[i])
        {
            st.pop();
        }
        if(st.empty())
        {
            nge[i]=-1;
        }
        else
        {
            nge[i]=st.top();
        }
        st.push(a[i]);
    }
    return nge;
}
int main(){
    
    return 0;
}