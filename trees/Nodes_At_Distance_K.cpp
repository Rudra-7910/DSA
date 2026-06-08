#include <bits/stdc++.h>
using namespace std;
class node {
public:
    int val;
    node* left;
    node* right;

    node(int val1) {
        val = val1;
        left = right = NULL;
    }
};
void markParents(node * root, unordered_map<node*,node*>& parent_track)
{
    if(root==NULL)
    {
        return ;            //remember , always use hashmap , to traverse back in tree to parents
    }                           // burning tree, multiple traversal needed 
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node* current= q.front();
        q.pop();
        if(current->left!=NULL)
        {
            parent_track[current->left]=current;
            q.push(current->left);
        }
        if(current->right!=NULL)
        {
            parent_track[current->right]=current;
            q.push(current->right);
        }
    }
}
vector<int> distanceK(node * root, node * target , int k)
{
    unordered_map<node*,node*> mp;
    markParents(root,mp);
    unordered_map<node*,bool> visited;
    queue<node*> q;
    q.push(target);
    visited[target]=true;
    int curr_level=0;
    while(!q.empty())
    {
        int size=q.size();
        if(curr_level==k) break;
        curr_level++;
        for(int i = 0; i < size; i++)
        {
            node * current= q.front();
            q.pop();
            if(current->left!=NULL && !visited[current->left])
            {
                q.push(current->left);
                visited[current->left]=true;
            }
            if(current->right!=NULL && !visited[current->right])
            {
                q.push(current->right);
                visited[current->right]=true;
            }
            if(mp[current] && !visited[mp[current]])   // fixed
            {
                q.push(mp[current]);
                visited[mp[current]]=true;
            }
        }
    }
    vector<int> result;
    while(!q.empty())
    {
        node * current= q.front();
        q.pop();
        result.push_back(current->val);
    }
    return result;
}