#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* right;
    node * left;
    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
int sum_of_nodes(node * root)
{
    if(root==NULL)
    {
        return 0;
    }
    int leftSum= sum_of_nodes(root->left);
    int rightSum= sum_of_nodes(root->right);
    return root->data+leftSum+rightSum;
}
int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << "Sum of all nodes = "
         << sum_of_nodes(root);

    return 0;
}