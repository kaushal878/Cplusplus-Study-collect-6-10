//Example 7.11: Object to Object Conversion (Method in destination CLass)
#include<iostream.h>
#include<conio.h>
class distance
{
	int meter;
	float cm;
	public:
	distance(int m, int c)
	{
		meter = m;
		cm = c;
	}
	int getmeter()
	{
		return meter;
	}
	float getcentimeter()
	{
		return cm;
	}
};
class dist
{
	int feet;
	int inch;
	public:
	dist()
	{
		feet=inch=0;
}
dist(int f, int i)
{
	feet = f;
	inch = i;
}
dist(distance d)
{
	int m,c;
	m=d.getmeter();
	c=d.getcentimeter();
	feet= m*3.3;
	inch= c*0.4;
	feet=feet+inch/12;
	inch= inch%12;
}
void display()
{
	cout<<feet<<"ft  "<<inch<<"inch"<<endl;
}
};
int main( )
{
    distance d1(6,40);
	dist d2=d1;
	d2.display();
    getche();
    return 0;
}

