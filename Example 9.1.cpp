//Example 9.1: Pointers to base class
#include<iostream.h>
#include<conio.h>
class Shape
{
	protected:
	float p,l,b;
	public:
	void setvalue(int x, int y)
	{
		l=x;
		b=y;
	}
};
class Square:public Shape
{
	public:
	void find_perimeter()
	{
		p=4*l;
		cout<<"Perimeter="<<p<<endl;
	}
};
int main()
{
	Shape bo, *bp;
	Square s;
	bp=&s;
	bp->setvalue(3, 3);
	/*
	bp->find_perimeter();
	it is invalid because  find_perimeter () is not
	inherited from Shape 	*/

	s.find_perimeter(); //Valid
	getch();
	return 0;
}
