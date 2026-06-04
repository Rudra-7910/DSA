#include <bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode*right;
    TreeNode(int x)
    {
        val=x;
        left=NULL;
        right=NULL;
    }
};
vector<int>  inOrderTransversal(TreeNode*root)
{
    vector<int> result;
    stack<TreeNode*> st;
    TreeNode*node= root;
    while(node!=NULL ||!st.empty())
    {
        if(node!=NULL)
        {
            st.push(node);
            node=node->left;
        }
        else
        {
            node=st.top();
            st.pop();
            result.push_back(node->val);
            node=node->right;
        }
    }
    return result;
}
int main(){
    
    return 0;
}