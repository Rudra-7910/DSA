#include <bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int data;
    node * left;
    node * right;
    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
vector<vector<int>> level_order_traversal(node * root)
{
    vector<vector<int>>ans;
    queue<node*>q;
    if(root==NULL)
    {
        return;
    }
    q.push(root);
    while(!q.empty())
    {
        int size= q.size();
        vector<int> level;
        for(int i=0;i<size;i++)
        {
            node * treenode= q.front();
            if(treenode->left!=NULL) q.push(treenode->left);
            if(treenode->right!=NULL) q.push(treenode->right);
            level.push_back(treenode->data);
        }
        ans.push_back(level);
    }
    return ans;
}
int main(){
    return 0;
}