#include <bits/stdc++.h>
using namespace std;
class node {        //defining trees ,
    public:
    int data;
    node * left;
    node * right;
    node (int val)
    {
        data=val;
        left=right=NULL;
    }
};
vector<int> TopView(node * root)
{
    vector<int> ans;            //ans vector    
    map<int,int> mp;            //map
    queue<pair<int  , node*>> q;     //queue of pair , 1st value --- unique , 
    q.push({0,root});       //push root
    while(!q.empty())           // loop until q is empty (just like lot ) 
    { 
        auto curr=q.front();
        q.pop();
        node * Node=curr.second;
        int col= curr.first;
        if(mp.find(col)==mp.end())
        {
            mp[col]= Node->data;
        }
        if(Node->left!=NULL)
        {
            q.push({col-1,Node->left}); 
        }
        if(Node->right!=NULL)
        {
            q.push({col+1,Node->right});
        }
    }
    for(auto it:mp)
    {
        ans.push_back(it.second);
    }
    return ans;

}
int main(){
    return 0;
}