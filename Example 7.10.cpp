//Example 7.10: Object to Object Conversion (Method in Source CLass
#include<iostream.h>
#include<conio.h>
class distance
{
	int feet;
	int  inch;
	public:
	distance()
	{
		feet=inch=0;
	}
	distance(int f, int i)
	{
		feet = f;
		inch = i;
	}
	void display()
	{
		cout<<feet<<"ft "<<inch<<"inch"<<endl;
	}
};
class dist
{
	int meter;
	int centimeter;
	public:
	dist(int m, int c)
	{
		meter = m;
		centimeter = c;
	}
	operator distance( )
	{
		distance d;
		int f,i;
		f= meter*3.3;
		i=centimeter*0.4;
		f=f+i/12;
		i=i%12;
		return distance(f,i);
	}
};
int main()
{
	distance d1;
	dist d2(4,50);
	d1=d2;
	d1.display();
	getche();
	return 0;
}
