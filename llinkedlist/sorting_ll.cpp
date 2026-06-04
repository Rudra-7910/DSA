#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data ;
    node * next;
    node(int data1 , node * next1=nullptr)
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
node * sorting_ll(node*head)
{
    int count = 0;
    node* temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    for(int i = 0; i < count-1; i++)
    {
        node* temp = head;
        node* mover = temp->next;

        while(mover != NULL)
        {
            if(temp->data > mover->data)
            {
                swap(temp->data, mover->data);
            }

            temp = temp->next;
            mover = mover->next;
        }
    }
    return head;
}
int main () 
{
    vector<int> a={3,2,1,4,5};
    node * head= convert2ll(a);
    node * sorted= sorting_ll(head);
    node * temp=sorted;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    return 0;
}