#include<iostream>
using namespace std;
void print(int i,int f)
{
    if(i>f) return ;
    cout<<i;
    { print(i+1,f);}

}
int main ()
{
    cout<<"enter the number n ";
    int n;
    cin>> n;
    print(1,n);
    return 0;
}