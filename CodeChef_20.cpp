#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    //input: number of hour q studentslwwp per day
    int H;
    cin >> H;
    if(H<8)
    {
        cout << "LESS";
    }
    else if(H==8)
    {
        cout << "PERFECT";
    }
    else
    {
        cout << "MORE";
    }
}    
    