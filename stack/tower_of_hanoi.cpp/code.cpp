#include <bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n, char source, char helper, char destination)
{
    if(n==1)
    {
        cout<<"Move disk 1 from "<<source<<" to "<<destination<<endl;
        return;
    }

    tower_of_hanoi(n-1, source, destination, helper);

    cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;

    tower_of_hanoi(n-1, helper, source, destination);
}

int main()
{
    tower_of_hanoi(3,'A','B','C');
}