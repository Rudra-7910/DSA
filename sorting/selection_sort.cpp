#include <bits/stdc++.h>
using namespace std;
void bubble_sorting(vector<int> &a )
{
    for(int i=0;i<a.size();i++)
    {
        int min= i;
        for(int j=i+1;j<a.size();j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        swap(a[i],a[min]);
    }
        for(int i = 0; i < a.size(); i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    vector<int> a= {64,72,47,1,2};
    bubble_sorting(a);
    return 0;
}