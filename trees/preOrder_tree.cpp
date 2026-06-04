#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
vector<int> preorder_traversal(node * root)
{
    vector<int> preorder;
    stack<node*> st;
    if(root==NULL)
    {
        return;
    }
    st.push(root);
    while(!st.empty())
    {
        root=st.top();
        st.pop();
        preorder.push_back(root->data);
        if(root->right!=NULL)
        {
            st.push(root->right);
        }
        if(root->left!=NULL)
        {
            st.push(root->left);
        }
    }
    return preorder;
}
int main(){
    
    return 0;
}