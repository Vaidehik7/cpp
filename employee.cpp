#include<iostream>
#include<string.h>
using namespace std;

struct employee
{
	char name[100];
	int age;
	int phone_no;
	float salary;
	
}e;

void set(struct employee *e)
{
    cout<<"enter the employee name = ";
    cin>>e->name;

    cout<<"enter employee age = ";
    cin>>e->age;

    cout<<"enter the employee phone_no = ";
    cin>>e->phone_no;
    
    cout<<"enter person's salary = ";
    cin>>e->salary;
    
    cout<<endl;
} 
 
void get(struct employee *e)
{
    {
        cout<<"Name = "<<e->name<<endl;
        cout<<"Age = "<<e->age<<endl;
        cout<<"Phone_no = "<<e->phone_no<<endl;
        cout<<"Salary = "<<e->salary<<endl;
    }
}

void validage(struct emplyee *e)
{
	if(e->age<=59)
	{
		cout<<"Valid age";
	}
	else
	{
		cout<<"invalid age";
	}
}

int main()
{
    set(&e);
    get(&e);
    validage(&e);
}
