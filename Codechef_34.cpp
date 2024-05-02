#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int s;//total mb
        int x;//first app mb
        int y; //second app mb
        int z;//new app mb
        cin >> s >> x >> y >> z;
        
       if(s<x+y+z)
       {
           if(s>=x+z || s>=y+z)
           cout<<1;
           else
           cout << 2;
       }
       else
       cout << 0;
       cout << endl;
        
        
    }
    return 0;
}
