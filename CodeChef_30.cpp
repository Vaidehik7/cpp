#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    //x = assignmets, y = minutes, z = days
    int t;
    cin >> t;
    
    while ( t-- )
    {
        int x, y, z, p, s;
      
        cin >> x >> y >> z;
          s = x * y;
        p = z * 24 * 60;
        //total mintues = x * y
        if(s <= p)
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
