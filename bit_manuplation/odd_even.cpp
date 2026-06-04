#include <bits/stdc++.h>
using namespace std;
string odd_even(int n)
{
    if(n&1==1)
    {
        return "true";
    }
    else
    {
        return "false";
    }
}
int main(){
    int n;
    cout << "enter the number" << endl;
    cin>>n;
    string answer= odd_even(n);
    cout << answer << endl;
    return 0;
}