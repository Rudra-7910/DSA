#include<bits/stdc++.h>
using namespace std;
int precedence_order(char c)
{
    if(c=='^')
        return 3;
    if(c=='*'||c=='/')
        return 2;
    if(c=='+'||c=='-')
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
        char c=s[i];
        if(c>='A'&& c<='Z' || c>='a' && c<='z' || c >='0'&& c<='9')
        {
            result=result+c ; //added operand
        }
        else if ( c=='(')
        {
            st.push(c);
        }
        else if (c==')')
        {
            while(st.top()!='(')
            {
                result=result+st.top();   // added all operand till ( is obtained
                st.pop();                 // popped it after adding 
            }
            st.pop();   // popping (
        }
        else 
        {
            while(!st.empty() && precedence_order(s[i])<=precedence_order(st.top()))
            {
                result=result+st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
        while(!st.empty())
        {
            result=result+st.top();
            st.pop();
        }
        cout<<"postfix_order"<<result<<endl;
    }
int main () 
{
    string exp = "(p+q)*(m-n)";  // Infix expression
    cout << "Infix expression: " << exp << endl;
    infix_to_postfix(exp);  // Convert the infix expression to postfix
    return 0;
}