#include<bits/stdc++.h>
#include<string>
using namespace std;
string convert2binarty ( int n)
{
    string res="";
    while(n>0)
    {
        if(n%2==1)
        {
            res=res+"1";
        }
        else
        {
            res=res+"0";
        }
        n=n/2;
    }
    reverse(res.begin(),res.end());
    return res;
}
int binary_to_normal(string binary)
{
    int length = binary.length();
    int p2=1;
    int num=0;
    for(int i=length-1;i>=0;i--)
    {
        if(binary[i]=='1')
        {
            num=num+p2;
        }
        p2=p2*2;
    }
    return num;
}
int main () 
{
    int n=279499297;
    string answer= convert2binarty(n);
    cout<< answer<<" ";
    string binary= "1101";
    int answer1 = binary_to_normal(binary);
    cout<<answer1<<" ";
}