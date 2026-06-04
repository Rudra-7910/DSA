#include<iostream>
#include<vector>
using namespace std;
int main () 
{
    //time complexity is O(N) AND IN simple sorting algorithm it is O(N LOG N ) 
    int low=0;
    int mid=0;
    vector <int> a={1,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,0,0,0,0,0};
    int high= a.size()-1;
   // for(int i=mid;i<high;i++) (dont use it , because fir vo bss swap krega and wont redo the process ( if needed ) )
   // for example , 1 and 0 swap hue , but now 0 ko again low pr swap krna h , for loop ye nhi krega sicne it will forcefully incremenet 
   // but while loop will do it 
   while(mid<high)
    {
        if(a[mid]==0)
        {
            swap(a[low],a[mid]);
            low++;
            mid++;
        }
        else if ( a[mid]==1)
        {
            mid++;
        }
        else if(a[mid]==2)
        {
            swap(a[mid],a[high]);
            high--;
        }
    }
        for(int i=0;i<a.size();i++)
        {
            cout<<a[i];
        }
    }