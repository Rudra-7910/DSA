#include <bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int data;
    node * right;
    node* left;
    node ( int val)
    {
        data= val;
        left=right=NULL;
    }
};
bool same_tress(node * root1, node*root2)
{
    if(root1==NULL&&root2==NULL)
    {
        return true;
    }
    if(root1==NULL||root2==NULL)
    {
        return false;
    }
    if(root1->data!=root2->data)
    {
        return false;
    }
    return same_tress(root1->left,root2->left) && same_tress(root1->right,root2->right);
    
}
int main(){
    
    return 0;
}