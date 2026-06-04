#include<iostream>
using namespace std;
int main ()
{
    int n=5;
    int i;
    int s_largest=-1;
    int a[5]={5,66,32,11,3};
    int max=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
     cout<<"maximum is"<<" "<<max;
    for(int i = 0; i < 5; i++)
    {
        if(a[i] > s_largest && a[i] != max)
        {
            s_largest = a[i];
        }
    }
     cout<<"second maximum is "<<" "<<s_largest;
     return 0;
}