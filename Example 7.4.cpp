//Example 7.4: Overloading plus operator
#include<iostream.h>
#include<conio.h>
class distance
{
	private:
	int feet;
	int inches;
	public:
	void getdata( )
	{
		cout<<"Enter feet and inch"<<endl;
		cin>>feet>>inches;
	}
	distance operator +( distance d2)
	{
		distance d3;
		d3.feet = feet + d2.feet;
		d3.inches = inches + d2.inches;
		d3.feet=d3.feet +d3.inches/12;
		d3.inches=d3.inches%12;
		return d3;
	}
	void display()
	{
		cout<<"("<<feet<<", "<<inches<<")"<<endl;
	}
};

int main()
{
	distance d1,d2,d3;
	d1.getdata();
	d2.getdata();
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
