#include<iostram>

const int MAX_SIZE = 100;
using namespace std;

  struct Node{
  char data[MAX_SIZE];
  int size;
	int next;

      Node()
     {
       size = 0;

    
   };

 int main()
  {
     Node n1;
      n1.data[10];

     Node n2;
      n2.data[10];
   
  n1.next=n2;
n1.data= "Guitar";
  n2.next=n3;
n2.data = "Piano";
  n3.next = n4;
n3.data = "Uklele";
 n4.next = NULL;

}
