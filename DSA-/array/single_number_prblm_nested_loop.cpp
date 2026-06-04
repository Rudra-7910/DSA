#include<iostream>
using namespace std;

int main () 
{
    int a[]={4,1,2,1,2};
    
    for(int i=0; i<5; i++)
    {
        int count = 0; 
        for(int j=0; j<5; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if(count == 1)
        {
            cout << "Unique Element is " << a[i] << endl;
        }
    }
    return 0;
}