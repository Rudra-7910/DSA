#include <bits/stdc++.h>
using namespace std;
int counting(int a, int b)
{
    int x=(a^b);
    int count=0;
    while(x>0)
    {
        if(x&1)
        count++;
        x=x>>1;
    }
    return count;
}
int main(){
    cout<< counting(10,13)<<" ";
    return 0;
}