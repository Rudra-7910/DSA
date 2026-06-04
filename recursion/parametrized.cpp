#include <bits/stdc++.h>
using namespace std;
void funcction(int i,int sum)
{
    if(i<1)
    {
        cout<<sum;
        return;
    }
    funcction(i-1,sum+i);
}
int main(){
    int n=9899;
    funcction(n,0);
    return 0;
}