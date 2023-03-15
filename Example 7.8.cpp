#include<iostream.h>
#include<conio.h>
class distance
{
	private:
	int feet;
	int inch;
	public:
	distance(int f,int i)
	{
		feet=f;
		inch=i;
	}
	distance(float m)
	{
		feet = int(m);
		inch = 12 * (m - feet);
	}
	void display()
	{
		cout<<"Feet = "<<feet<<endl <<"Inch = "<<inch;
	}
};
int main()
{
	float f = 2.5;
	distance d = f;
	d.display();
	getch();
	return 0;
}
