//Example 8.1: Sigle Inheritance
#include <iostream.h>
#include<conio.h>
class Student
{
	char *name;
	int age;
	public:
	Student(char *n, int a)
	{
		name = n;
		age = a;
	}
	char *getName()
	{
		return name;
	}
	void display()
	{
		cout<<"Name::"<<name<<endl;
		cout<<"Age::"<<age<<endl;
	}
};
class ForeignStudent : public Student
{
	char *country;
	public:
	ForeignStudent(char *n, int a, char *c) : Student(n, a)
	{
		country = c;
	}
	void displayForeign()
	{
		display();
		cout<<"Country::"<<country<<endl;
	}
};
int main()
{
	ForeignStudent fs("Steven", 21, "UK");
	fs.displayForeign();
	getch();
	return 0;
}
