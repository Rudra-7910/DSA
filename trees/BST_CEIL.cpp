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
int  CEIL(TreeNode*root, int x)
{
    int ceil=-1;
    while(root!=NULL)
    {
        if(root->val==x)
        {
            ceil=root->val;
            return ceil;
        }
        if(x>root->val)
        {
            root=root->right;
        }
        else
        {
            ceil=root->val;
            root=root->left;
        }
    }
    return ceil;
}
int main(){
    
    return 0;
}