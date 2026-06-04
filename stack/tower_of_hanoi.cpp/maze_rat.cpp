#include <bits/stdc++.h>
using namespace std;
int counting(int sr,int sc, int er , int ec)
{
    if(sr>er|| sc>ec)
    return 0;
    if(sr==er && sc==ec)
    return 1;
    int downways= counting(sr+1,sc,er,ec);
    int sideways=counting(sr,sc+1,er,ec);
    return downways+sideways;
}
int main()
{
    int rows, cols;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int totalWays = counting(1, 1, rows, cols);

    cout << "Total ways to reach destination: " << totalWays << endl;

    return 0;
}