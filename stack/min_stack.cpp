#include <bits/stdc++.h>
using namespace std;
class MinStack{
    stack<pair<int,int>> st;
    public:
    void push(int val)
    {
        if (st.empty())
        {
            st.push({val,val});
        }
        else
        {
            int currentMin= min(val,st.top().second);
            st.push({val,currentMin});
        }
    }
    void pop()
    {
        st.pop();
    }
    int top () 
    {
        return st.top().first;
    }
    int getMin()
    {
        return st.top().second;
    }
};
int main(){
    
    return 0;
}