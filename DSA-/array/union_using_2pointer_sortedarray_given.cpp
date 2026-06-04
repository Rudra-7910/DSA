#include<iostream>
#include<vector>
using namespace std;
int main () 
{
    vector<int> a;   //defining vector a;
    vector<int> b;  //defining vector b;
    a={1,2,3,4,6};
    b={2,3,5};
    int n1= a.size();
    int n2=b.size();
    int i=0;    //initializing pointers to a and b , starting element
    int j=0;
    vector<int> union_array; //making a new array for storing them 
    while(i<n1 && j<n2)  //pointer is between them
    {
        if(a[i]<=b[j])  //since we need in sorted order 
            {
                if(union_array.size()==0||union_array.back()!=a[i])
                //jab tk ya  toh ye first element ho , orr a[i] chhota h ,
                // and agr already equal h last element of union_array then , u
                //sko ignore else iff not equal ( means not present in , array , then add it )
                {
                    union_array.push_back(a[i]);
                }
                i++;
            }
            else{
                if(union_array.size()==0||union_array.back()!=b[j])
                {
                    union_array.push_back(b[j]);
                }
                j++;
            }
    }
    while(j<n2)
    //kabhi kabhi , j out of bound hla jayega , and n1 khtm ho jayega fir kya krna h 
    {
         if(union_array.size()==0||union_array.back()!=b[j])
          {
             union_array.push_back(b[j]);
             }
            j++;
    }
    while(i<n1)
    {
        if(union_array.size()==0||union_array.back()!=a[i])
            {
                 union_array.push_back(a[i]);
            }
        i++;
    }
    for(int k=0;k<union_array.size();k++)
    {
        cout<<union_array[k];
    }
    return 0;
}
