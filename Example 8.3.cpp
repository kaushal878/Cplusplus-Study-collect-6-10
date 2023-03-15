//Example 8.3: Hierarchical Inheritance
#include<iostream.h>
#include<conio.h>
class Employee
{
	int eid;
	int salary;
	public:
	void getEmp()
	{
		cout<<"Enter id and salary of employee"<<endl;
		cin>>eid>>salary;
	}
	void displayEmp()
	{
		cout<<"Emp ID::"<<eid<<endl;
		cout<<"Salary::"<<salary<<endl;
	}
};
class Engineer:public Employee
{
	char dept[10];
	public:
	void getdata()
	{
		getEmp();
		cout<<"Enter Department"<<endl;
		cin>>dept;
	}
	void display()
	{
		displayEmp();
		cout<<"Departement::"<<dept<<endl;
	}
};
class Typist:public Employee
{
	int ts;//typing speed
	public:
	void getdata()
	{
		getEmp();
		cout<<"Enter typing speed"<<endl;
		cin>>ts;
	}
	void display()
	{
		displayEmp();
		cout<<"Typing Speed::"<<ts<<endl;
	}
};
int main()
{
	Engineer e;
	Typist t;
	e.getdata();
	t.getdata();
	cout<<"-------Employee Details--------"<<endl;
	cout<<"------------------------------"<<endl;
	e.display();
	cout<<endl;
	t.display();
	getch();
	return 0;
}
