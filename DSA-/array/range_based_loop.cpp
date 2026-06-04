#include<iostream>
using namespace std;
int main () 
{
    int a[]={ 1,2,3,4,6,7,8};
    for ( auto b:a)
    {
        cout<<b<<endl;
    }
    return 0;
}