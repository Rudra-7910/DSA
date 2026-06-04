#include<iostream>
int main () 
{
    int target=18;
    int i;
    int j;
    int a[]={2,7,11,15};
    for(i=0;i<4;i++)
    {
        for(j=i+1;i<4;i++)
        {
            if (a[i]+a[j]==target)
            {
                std::cout<< i <<" "<< j;
            }
        }
    }
    return 0;
}