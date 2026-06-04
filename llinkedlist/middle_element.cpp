#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data ;
    node * next;
    node (int data1 , node* next1=nullptr)
    {
        data=data1;
        next=next1;
    }
};
node * convert2ll(vector<int> & a)
{
    node * head =new node ( a[0]);
    node * temp =head;
    for(int i=1;i<a.size();i++)
    {
        node * curr= new node ( a[i]);
        temp->next=curr;
        temp=temp->next;
    }
    return head;
}
node * middle_element(node * head)
{
    node * slow = head;
    node * fast= head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main () 
{
    vector<int> a={1,2,3,4,5,6,7,8,9,10,11,12,13,13,12,15,17};
    node * head= convert2ll(a);
    node * middle_element_answer= middle_element(head);
    node * temp = middle_element_answer;
    cout<<temp->data<<" ";
}