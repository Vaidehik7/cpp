#include<bits/stdc++.h>
using namespace std;

class Base{
	public:
		virtual void print();
		void show();
}


Base::print(){
	cout<<"Base Class called...."<<endl;
}


class Derived: public Base{
	public:
		void print();
		void show();
}


Derived::print(){
	cout<<"Derived Class called...."<<endl;
}


Base::show(){
	cout<<"Derived Class show fun called...."<<endl;
}


int main(){
	Base *b=new Derived();
	b->print();
	b->show();
}
