#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a= {9,2,2,3,3,6,6,4,4,2,2};
    int XOR=0;
    for(int i = 0; i < a.size(); i++){
        XOR=XOR^a[i];
    }
    cout<<XOR;
    return 0;
}