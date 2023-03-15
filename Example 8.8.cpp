//Example 8.8: Order of Execution of Constructors
#include<iostream.h>
#include<conio.h>
class A
{
public:
A( )
{
		cout<<"Class A Constructor"<<endl;
}
};
class B:public A
{
public:
B( )
{
		cout<<"Class B Constructor"<<endl;
}
};
class C: public B
{
public:
C( )
{
		cout<<"Class C Constructor"<<endl;
}
};
int main( )
{
	C x;
	getch();
	return 0;
}
