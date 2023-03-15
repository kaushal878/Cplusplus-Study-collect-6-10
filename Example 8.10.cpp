//Example 8.10: Method Overriding
#include<iostream.h>
#include<conio.h>
class A 
{
	public:
	void show() 
{
		cout<<"This is class A";
	}
};
class B :  public A 
{
	public:
	void show() 
{
		cout<<"This is class B"<<endl;
	}
};
int main() 
{
	B b;
	b.show();     //invokes the member function from class B
	b.A :: show();     //invokes the member function from class A
	getche();
	return 0;
}
