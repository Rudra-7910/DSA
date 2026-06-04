#include <bits/stdc++.h>
using namespace std;
int arr[30];
int top1=arr[0];
int top2 = arr[30];
void push1(int x)
{
    if(top1+1==top2)
    {
        cout<<"overflow";
        return ;
    }
    top1++;
    arr[top1]=x;
}
void push2(int x)
{
    if(top1+1==top2)
    {
        cout<<"overflow";
        return ;
    }
    top2--;
    arr[top2]=x;
}
int pop1()
{
    if(top1 == -1)
    {
        cout<<"Stack1 Underflow\n";
        return -1;
    }

    int x = arr[top1];
    top1--;
    return x;
}

int main(){
    
    return 0;
}