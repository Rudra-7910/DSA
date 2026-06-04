#include <bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int x)
    {
        val=x;
        left=NULL;
        right=NULL;
    }
};
TreeNode* BST(TreeNode*root, int z)
{
    while(root!=NULL && root->val!=z)
    {
        if(z<root->val)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    return root;
}
int main(){
    
    return 0;
}