#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
	// your code goes here
	int Oneful_Pair=a+b+(a*b);
	//Oneful_Pair=111;
		
	    if(Oneful_Pair==111)
	    {
	        cout << "YES";
	    }
	    else
	    {
	        cout << "NO";
	    }
	
	return 0;
}
