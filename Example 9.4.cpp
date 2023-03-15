//Example 9.4: Abstract base classes and pure virtual functions
#include <iostream.h>
#include<conio.h>
class Polygon
{
	protected:
	int width, height;
	public:
	void setvalues (int a, int b)
	{
		width=a; height=b;
	}
	virtual int area (void) =0;
};
class Rectangle: public Polygon
{
	public:
	int area (void)
	{
		return (width * height);
	}
};
class Triangle: public Polygon
{
	public:
	int area (void)
	{
		return (width * height / 2); }
};
int main ()
{
	Rectangle rect;
	Triangle trgl;
	Polygon * poly = &rect;
	poly->setvalues(4,5);
	cout<<"Area of Rectangle="<<poly->area()<< endl;
	poly=&trgl;
	poly->setvalues(6,5);
	cout<<"Area of Traingle="<<poly->area()<< endl;
	getch();
	return 0;
}
