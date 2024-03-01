#include <iostream>
using namespace std;
int sum, sub,  ab;
int a, b;
int *pa = &a, *pb = &b;

void update(int *a,int *b) {
    // Complete this function    
    sum = *a + *b;
    sub = *a - *b;
    ab = abs(sub);
}

int main() {
   cin >> a >> b;
   update(pa, pb);
   cout<<sum<<endl;
   cout<<ab;
   
    return 0;
}

