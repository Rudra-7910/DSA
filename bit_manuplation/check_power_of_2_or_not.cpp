#include<bits/stdc++.h>
using namespace std;
bool power_of_2(int n)
{
    if((n&(n-1))==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main () {
    cout<<power_of_2(31)<<" ";
}