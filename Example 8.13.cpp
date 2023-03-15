//Example 8.13: Containership
#include<iostream.h>
#include<conio.h>
class Employee
{
    int eid, sal;
 	public:
	void getdata()
	{
		cout<<"Enter id and salary of employee"<<endl;
		cin>>eid>>sal;
	}	
	void display()
	{
		cout<<"Emp ID:"<<eid<<endl<<"Salary:"<<sal;
	}
};
class Company
{
int cid; 
char cname[20];
Employee e;
 	public:
	void getdata()
	{
		cout<<"Enter id and name of the company:"<<endl;
		cin>>cid>>cname;
		e.getdata();
	}	
	void display()
	{
		cout<<"Comp ID:"<<cid<<endl<<"Comp Name:"<<cname;
		e.display();
	}
};
int main() 
{
	Company c;
	c.getdata();
	cout<<"###########Company Details################"<<endl;
	c.display();
	getch();
	return 0;
}
