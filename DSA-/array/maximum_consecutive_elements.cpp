#include<iostream>
#include<vector>
using namespace std;        //practiced
int main ()
{
    vector<int> elements={1,1,1,6,6,3,2,1,1,1,1,1};
    int maxi=0;
    int cnt=0;
    for(int i=0;i<elements.size();i++)
    {
        if(elements[i]==1)
        {
            cnt++;
            maxi=max(cnt,maxi);
        }
        else{
            cnt=0;
        }
    }
    cout<<maxi;

}