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
node * intersecting_element(node * head1, node * head2)
{
    node * temp1= head1;
    node * temp2= head2;
    while(temp1!=temp2)
    {
        if(temp1==NULL)
        {
            temp1=head2;
        }
        else
        {
            temp1=temp1->next;
        }
        if(temp2==NULL)
        {
            temp2=head1;
        }
        else
        {
            temp2=temp2->next;
        }
    }
    return temp1;
}
