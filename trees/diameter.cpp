#include <bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int data;
    node *right;
    node * left;
    node ( int val)
    {
        data= val;
        left=right=NULL;
    }
};
int ans=0;
int height ( node  * root)
{
    if(root==NULL)
    {
        return 0;
    }
    int leftHeight= height(root->left);
    int rightHeight= height(root->right);
    ans= max(ans, leftHeight+rightHeight);
    return 1+max(leftHeight,rightHeight);
}
int diameter(node * root)
{
    height(root);
    return ans;
}
int main(){

    return 0;
}