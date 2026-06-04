#include<iostream>
//first approach will be , of making a loop , and counting to count++
//hasing means , storing , and fetching later
//we will make array ( has array ) of ,till max elements in main array 
//i will just enter hash[element] , will return number of elements 
using namespace std;
int main () 
{
    int n;
    cin>>n;
    int arr[n];                                                     //practiceddd 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //precomputing
    int hash[13] ={0};  //13 ki jgh maximum elemnet aayega , we will consider 13 for learning
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]=hash[arr[i]]+1;
    }
    int query;
    cin>>query;
    while(query--)  //fetching
    {
        int number;
        cin>>number;
        cout<<hash[number];
    }
    return 0;
}