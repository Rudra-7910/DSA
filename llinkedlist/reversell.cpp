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
node * reverse( node * head)
{

    node * temp = head;
    node * prev = NULL;
    while(temp!=NULL)
    {
        node * next= temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    return prev;

}
int main()
{
    vector<int> a = {1,2,3,4,5};

    node* head = convert2ll(a);
    head = reverse(head);

    node* temp = head;
    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}