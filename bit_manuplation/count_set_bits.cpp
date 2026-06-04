#include<bits/stdc++.h>
using namespace std;
int count_set_bits(int n)
{
    int count=0;
    while(n>0)
    {
        if(n%2==1)
        {
            count=count+1;
        }
        n=n/2;
    }
    return count;
}
int main () 
{
    int n=13;
    int answer =count_set_bits(n);
    cout<<answer<<" ";
}