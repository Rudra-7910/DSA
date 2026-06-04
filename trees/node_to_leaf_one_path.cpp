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
bool getPath(node* root , vector<int> &ans,int x)
{
    if(root==NULL)
    {
        return false;
    }
    ans.push_back(root->data);

    if(root->data==x)
    {
        return true;
    }

    if(getPath(root->left,ans,x) ||
       getPath(root->right,ans,x))
    {
        return true;
    }
    ans.pop_back();
    return false;
}
int main(){
    
    return 0;
}