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
    node * head=new node(a[0]);
    node *mover =head;
    for(int i=1;i<a.size();i++)
    {
        node * temp=new node (a[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}
node * odd_even(node * head)
{
    node * temp= head;
    node * odd_head=NULL;
    node * even_head=NULL;
    node * even_tail=NULL;
    node *odd_tail=NULL;
    while(temp!=NULL)
    {
        if(temp->data%2!=0)
        {
            if(odd_head==NULL)
            {
                odd_head=temp;
                odd_tail=temp;
            }
            else
            {
                odd_tail->next=temp;
                odd_tail=temp;
            }
        }
    else
    {
        if(even_head==NULL)
        {
            even_head= temp;
            even_tail=temp;
        }
        else
        {
            even_tail->next=temp;
            even_tail=temp;
        }
    }
    temp=temp->next;
}
    if(odd_tail != NULL)
        odd_tail->next = even_head;

    if(even_tail != NULL)
        even_tail->next = NULL;

    return odd_head;
}
int main () 
{
    vector<int> a= {1,2,3,4,5,6};
    node * head= conver2ll(a);
    node * ans= odd_even(head);
    node * temp= ans;
    while(temp!=NULL)
    {
        cout<< temp->data<<" ";
        temp=temp->next;
    }
}