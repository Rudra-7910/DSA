#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node * right;
    Node * left;
    Node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
vector<int> getPath(Node* root,vector<int> path, int target)
{
    if(root==NULL)
    {
        return {};
    }
    path.push_back(root->data);
    if(root->data==target)
    {
        return path;
    }
    vector<int> left= getPath(root->left,path,target);
    if(!left.empty())
    {
        return left;
    }
    vector<int> right= getPath(root->right,path,target);
    {
        return right;
    }
    if(!right.empty())
    {
        return right;
    }

}
int main(){     
    
    return 0;
}