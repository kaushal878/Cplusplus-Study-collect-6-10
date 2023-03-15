//Example 8.11: Ambiguity in multiple inheritance
#include<iostream.h>
#include<conio.h>
class A 
{
	public:
	void show() 
{
		cout<<"This is class A"<<endl;
	}
};
class B 
{
	public:
	void show() 
{
		cout<<"This is class B"<<endl;
	}
};
class C : public A, public B 
{
};
int main() 
{
	C c;
	c.show();  //ambiguous - will not compile
	c.A :: show();  //OK
	c.B :: show();  //OK 
	getche();
	return 0;
}
