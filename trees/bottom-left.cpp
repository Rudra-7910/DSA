#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node * left;
    node* right;
    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
int bottom_left_data(node * root)
{
    int ans;
    if(root==NULL)
    {
        return -1;
    }
    queue<node * > q;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        for(int i = 0; i < size; i++)
        {
            node * nodee= q.front();
            q.pop();
            if(i==0)
            {
                ans=nodee->data;
            }
            if(nodee->left!=NULL)
            {
                q.push(nodee->left);
            }
            if(nodee->right!=NULL)
            {
                q.push(nodee->right);
            }
        }
    }
    return ans;
}
int main(){
    
    return 0;
}