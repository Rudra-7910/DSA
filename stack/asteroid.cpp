#include <bits/stdc++.h>
using namespace std;
void asteroid(vector<int>a)
{
    stack<int> st;
    for(int i=0;i<a.size();i++)
    {
        if(st.empty())
        {
            st.push(a[i]);
        }
        if(a[i]+st.top()<0)
        {
            
        }            //means no collision  
    }
}

int main(){
    
    return 0;
}