#include<bits/stdc++.h>
#include<stack>
using namespace std;
int prec(char c)
{
    if (c=='^')
        return 3;
    else if(c=='/'||c=='*')
        return 2;
    else if (c=='+'|| c=='-')
        return 1;
    else
        return -1;
}
void infix_to_postfix(string s)
{
    stack<char> st;
    string result;
    for(int i=0;i<s.size();i++)
    {
        char c = s[i];
        if(c>='A' && c<='Z' || c>='0'  && c <='9' || c>='a' && c<='z')
        {
            result = result+c;
        }
        else if(c=='(')
        {
            st.push(c);
        }
        else if ( c==')')
        {
            while(st.top()!='(')
            {
                result=result+st.top();
                st.pop();
            }
            st.pop();       // remove )
        }
        else{
            while((!st.empty() && prec(s[i])<=prec(st.top())))
        {
            result=result+st.top();
            st.pop();
        }
        st.push(c);
        }
    }
    while(!st.empty())
    {
        result=result+st.top();
        st.pop();
    }
    cout<<"PostFix_EXPRESSION"<<endl<<result;
}
int main() {
    string exp = "(p+q)*(m-n)";  // Infix expression
    cout << "Infix expression: " << exp << endl;
    infix_to_postfix(exp);  // Convert the infix expression to postfix
    return 0;
}