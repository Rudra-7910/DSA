// in DNF , we use 2 pointer and one ttirtor , dont remember it as a s , three pinter 
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
node * sort_0_1_2(node * head)
{
    node * zerohead= new node (-1);
    node * firsthead=new node ( -1 );
    node * secondhead= new node (-1 );
    node * temp= head;
    node * zero= zerohead;
    node * first = firsthead;
    node * second = secondhead;
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
            zero->next=temp;
            zero=zero->next;
        }
        else if (  temp ->data ==1 )
        {
            first->next=temp;
            first=first->next;
        }
        else
        {
            second->next=temp;
            second= second->next;
        }
        temp=temp->next;
    }
    if(firsthead->next!=NULL)
    {
        zero->next=firsthead->next;
    }
    else
    {
        zero->next=secondhead->next;
    }
    first->next=secondhead->next;
    second->next=NULL;
    node * ans= zerohead->next;
    delete firsthead;
    delete secondhead;
    delete zerohead;
    return ans;
}
int main ()
{
    vector<int> a= {1,2,0,1,2,0,0,0,1,2,2,1,0};
    node * head= convert2ll(a);
    node * sorted= sort_0_1_2(head);
    node * temp = sorted;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}

