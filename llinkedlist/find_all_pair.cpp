#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node * next;
    node *prev;
    node(int data1 , node * prev1=nullptr, node * next1=nullptr)
    {
        data=data1;
        prev=prev1;
        next=next1;
    }               //i was thinking of two pointer approaxch , one at lowest, one at highest 
};
node * convert2dll(vector<int> &a)
{
    node * head= new node(a[0]);
    node * mover= head;
    for(int i=1;i<a.size();i++)
    {
        node * temp = new node ( a[i]);
        mover->next=temp;
        temp->prev=mover;
        mover=temp;
    }
    return head;
}
node * tail(node * head){
    node * temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    return temp;
}
void find_all_pairs(node * head,int sum )
{
    node * left= head;
    node * right = tail(head);
while(left != right && right->next != left)
{  
    if(left->data+right->data>sum)
    {
        right = right->prev;
    }
    else if( left->data +right->data==sum)
    {
        cout << left->data << " " << right->data << endl;
        left = left->next;
        right = right->prev;
    }
    else
    {
        left=left->next;
    }
}
}
int main()
{
    vector<int> a = {1,2,3,4,5,6,7};

    node* head = convert2dll(a);

    int sum = 8;

    find_all_pairs(head, sum);

    return 0;
}