#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    //x=rs
    int t;
    
    cin >> t;
    
    
    while(t--)
    {
        int a;
        cin >> a;
        int x = 4 * a;
        
       
        if(x <= 1000)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
