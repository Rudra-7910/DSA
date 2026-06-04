#include <bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> &a )
{
    for(int i=0;i<a.size()-1;i++)
    {
        for(int j=0;j<a.size()-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    vector<int> a= {76,34,22,3,2,6};
    bubble_sort(a);
    return 0;
}