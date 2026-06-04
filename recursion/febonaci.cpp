#include <bits/stdc++.h>
using namespace std;
int  febonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    int last=febonacci(n-1);
    int slast= febonacci(n-2);
    return slast+ last;
}
int main(){
    int n=5 ;
    cout<<febonacci(11);  
    return 0;
}