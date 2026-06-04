#include<bits/stdc++.h>
using namespace std;
void postfix_to_infix(string s)
{
    stack<string> st;
    string result;
    for(int i=0;i<s.size();i++)
    {
        char c = s[i];
        if(c>='A' && c<='Z' || c>='a' && c<='z' || c>='0' && c <='9' )
        {
            st.push(string(1, c));
        }
        if(c=='^'||c=='*'||c=='/'||c=='+'||c=='-')
        {
            string t1= st.top();
            st.pop();
            string t2= st.top();
            st.pop();
            result = "(" + t2 + string(1, c) + t1 + ")";
            st.push(result);
        }
    }
    cout<<result;
}
int main () 
{
    string s= "AB-DE+F*/";
    postfix_to_infix(s);
    return 0;
}