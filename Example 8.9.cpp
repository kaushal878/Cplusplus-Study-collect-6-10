//Example 8.9: Destructors Under Inheritance
#include<iostream.h>
#include<conio.h>
class A
{
public:
~A( )
{
	cout<<"Class A Destructor"<<endl;
}
};
class B:public A
{
public:
~B( )
{
	cout<<"Class B Destructor"<<endl;
}
};
class C: public B
{
public:
~C( )
{
	cout<<"Class C Destructor"<<endl;
}
};
int main()
{
	{
		C x;
	}//destructor is called at this point
	getch();
	return 0;
}
