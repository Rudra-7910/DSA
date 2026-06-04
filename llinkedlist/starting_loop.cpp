#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node * next;
    node (int data1, node *next1=NULL)
    {
        data= data1;
        next= next1;
    }
};
node *conver2ll(vector<int> &a)
{
    node *head = new node(a[0]);
    node *mover = head;

    node *loopNode = NULL;   // jahan loop connect karna hai

    for(int i = 1; i < a.size(); i++)
    {
        node *temp = new node(a[i]);
        mover->next = temp;
        mover = mover->next;

        if(i == 2)   // maan lo index 2 pe loop banayenge
        {
            loopNode = mover;
        }
    }

    mover->next = loopNode;   // last node ko loopNode se connect kar diya

    return head;
}
int starting_loop(node * head)
{
    node * slow= head;
    node * fast= head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow= slow->next;
        fast=fast->next->next;
    if(slow==fast)
    {
        cout<<slow->data<<" ";
        return 0;
    }
}
    cout<<"NO lOOP ";
    return 0;
}
int main () 
{
    vector<int> a= {1,2,3,4,5,6,7,8};
    node * head= conver2ll(a);
    int ans= starting_loop(head);
    cout<< ans <<" ";
}