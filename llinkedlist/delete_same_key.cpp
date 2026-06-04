#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node* prev;
    node(int data1, node * next1=nullptr, node * prev1=nullptr)
    {
        data=data1;
        next=next1;
        prev=prev1;
    }
};
node * convert2ll(vector<int> &a)
{
    node *head= new node(a[0]);
    node *mover=head;
    for(int i=1;i<a.size();i++)
    {
        node * temp= new node ( a[i]);
        mover->next=temp;
        temp->prev=mover;
        mover=temp;
    }
    return head;
}
node* delete_same_key(node* head, int key)
{
    node* curr = head;
    while(curr != NULL)
    {
        if(curr->data == key)
        {
            node* temp = curr;
            if(curr->prev != NULL)
                curr->prev->next = curr->next;
            else
                head = curr->next;   
            if(curr->next != NULL)
                curr->next->prev = curr->prev;

            curr = curr->next;
            delete temp;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}
void print_dll(node* head)
{
    node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main ()
{
    vector<int> a ={4,10,10,10,6,6};
    node* head= convert2ll(a);
    node * main_ans=delete_same_key(head, 10);
    print_dll(main_ans);
}