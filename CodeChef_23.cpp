#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        if(x>y)
        {
            cout << "PROFIT" << endl;
        }
        else if(x==y)
        {
            cout << "NEUTRAL" << endl;
        }
        else
        {
            cout << "LOSS" << endl;
        }
    }
    return 0;
}
