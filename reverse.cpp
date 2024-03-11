#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int arr[10]={1, 2, 3, 4, 5};
    int brr[10];
    int n=4;
    int count = 0;
    cout << n;
    for(int i=n-1; i > 0; i--)
    {
    	cout << setw(4);
        cout << arr[i] << endl;
        
    }
    //cout << arr[i] << brr[i]; 
    return 0;
}

