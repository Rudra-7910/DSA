#include <bits/stdc++.h>
using namespace std;
int XOR_OVER_RANGE(int n)
{
    if(n%4==1)
    {
        return 1;
    }
    if(n%4==2)
    {
        return n+1;
    }
    if(n%4==3)
    {
        return 0;
    }
    else
    {
        return n;
    }
}
int main(){
    int n = 14;
    cout<< XOR_OVER_RANGE(n)<<" ";
    return 0;
}