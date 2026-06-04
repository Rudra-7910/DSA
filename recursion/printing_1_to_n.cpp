#include <bits/stdc++.h>
using namespace std;
void printing(int i , int n)
{
    if(i>n)
    {
        return;
    }
    cout<<i;
    printing(i+1,n);
}
int main(){
    printing(1,3);
    return 0;
}