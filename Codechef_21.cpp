#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    int x, y;
    int result;
    cin >> t;
    
    while(t--)
    {
        cin >> x >> y;
        
        result = max(0, x - y);
           cout << result << endl;
            
        }
        return 0;
    
}
