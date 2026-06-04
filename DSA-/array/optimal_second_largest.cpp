#include<iostream>
#include<vector>
using namespace std;
int main () 
{
    int slargest=-1;
    vector<int> a ={1,4,5,7,2,4,7,1,11,29,32,22};
    int largest=a[0];
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>largest)
        {
            slargest=largest;
            largest=a[i];
    }
    else if(a[i]<largest &&a[i]>slargest)
    {
        slargest=a[i];
    }
}
    cout<<"second_largest is "<< " "<<slargest;
    cout<<"largest is "<<" "<< largest;
}
//praticed