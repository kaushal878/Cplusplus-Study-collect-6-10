//Example 7.5: Overloading binary operator using friend function
#include<iostream.h>
#include<conio.h>
class distance
{
	private:
	int feet;
	int inches;
	public:
	distance()
	{
		feet=inches=0;
	}
	distance(int f, int in )
	{
		feet=f;
		inches=in;
	}
	friend distance operator +(distance, distance);
	void display()
	{
		cout<<"("<<feet<<", "<<inches<<")"<<endl;
	}

};
distance operator +( distance x,distance y)
{
	distance r;
	r.feet = x.feet + y.feet;
	r.inches = x.inches + y.inches;
	r.feet=r.feet +r.inches/12;
	r.inches=r.inches%12;
	return r;
}

int main()
{
	distance d1(5, 6), d2(7, 8), d3;
	d3 = d1 + d2;     //d1.operator +(d2);
	cout<<"d1 = ";
	d1.display();
	cout<<"d2 = ";
	d2.display();
	cout<<"d3 = ";
	d3.display();
	getche();
	return 0;
}
