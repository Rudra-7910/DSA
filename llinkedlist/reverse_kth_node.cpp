#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node * next;
    node(int data1,node*next1=nullptr)
    {
        data=data1;
        next=next1;
    }
};
node* convert2ll(vector<int> &a)
{
    node * head= new node (a[0]);
    node*curr=head;
    for(int i=1;i<a.size();i++)
    {
        node * temp= new node(a[i]);
        curr->next=temp;
        curr=curr->next;
    }
    return head;
}
node * finding(node*head , int k)
{
    node*temp=head;
    int count=0;
    while(temp!=NULL)
    {
        if(count==k)
        {
            return temp;
        }
        count=count+1;
        temp=temp->next;
    }
    return temp;
}
node *reverse(node *head)
{
    node *mover= head->next;
    head->next=NULL;
    while(mover!=NULL)
    {
        node *temp=mover->next;
        mover ->next=head;
        head=mover;
        mover =temp;
    }
    return head;
}
