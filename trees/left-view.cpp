#include <bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int data;
    node * left;
    node * right;
    node (int val )
    {
        data=val;
        left=right=NULL;
    }
};
vector<int> rightView(node * root)
{
    queue<node*> q;
    vector<int> ans;
    if(root==NULL)
    {
        return ans;
    }
    q.push(root);
    while(!q.empty())
    {
        int size= q.size();
        while(size>0)
        {
            node* nodee= q.front();
            q.pop();
            if(nodee->left!=NULL)
            {
                q.push(nodee->left);
            }
            if(nodee->right!=NULL)
            {
                q.push(nodee->right);
            }
            size--;
            if(size==0)
            {
                ans.push_back(nodee->data);
            }
        }
    }
    return ans;

}
int main(){
    
    return 0;
}