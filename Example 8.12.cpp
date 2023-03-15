//Example 8.12: Virtual Base Class
#include<iostream.h>
#include<conio.h>
class Person
{
	protected:
	char name[20];
	int age;
	public:
	void getdata()
	{
		cout<<"Enter name and age"<<endl;
		cin>>name>>age;
	}
	void display()
	{
		cout<<"Name::"<<name<<endl;
		cout<<"Age::"<<age<<endl;
	}
};
class Employee: virtual public Person
{
	protected:
	int eid,salary;
	public:
	void getdata()
	{
		cout<<"Enter Employee id and salary"<<endl;
		cin>>eid>>salary;
	}
	void display()
	{
		cout<<"Emp ID::"<<eid<<endl;
		cout<<"Salary::"<<salary<<endl;
	}
};
class Student: public virtual Person
{
	protected:
	int sid;
	char faculty[20];
	public:
	void getdata()
	{
		cout<<"Enter student ID and faculty"<<endl;
		cin>>sid>>faculty;
	}
	void display()
	{
		cout<<"student ID:"<<sid<<endl;
		cout<<"Faculty::"<<faculty<<endl;
	}
};
class TeachingAssistant: public Employee, public Student
{
	char course[20];
	public:
	void getdata()
	{
		Person::getdata();
		Employee::getdata();
		Student::getdata();
		cout<<"Enter course"<<endl;
		cin>>course;
	}
	void displaydata()
	{
		Person::display();
		Employee::display();
		Student::display();
		cout<<"Course::"<<course;
	}
};
int main()
{
	TeachingAssistant ta;
	ta.getdata();
	cout<<"---------TA Details--------"<<endl;
	cout<<"-------------------------------"<<endl;
	ta.displaydata();
	getch();
	return 0;
}
