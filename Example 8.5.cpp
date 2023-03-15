//Example 8.5: Program to prove visibility
#include<iostream.h>
#include<conio.h>
class Base
{
	private:
	int x;
	protected:
	int y;
	public:
	int z;
};
class Derived: public Base
{
	public:
	void getdata()
	{
		cout<<"Enter x, y and z"<<endl;
		cin>>x; //invalid, generates error because x is private
		cin>>y;
		cin>>z;
	}
};
int main()
{
	Derived d;
	d.getdata();
	cout<<"x="<<d.x<<endl;//invalid, generates error because x is private
	cout<<"y="<<d.y<<endl; //invalid, generates error because x is protrcted
	cout<<"z="<<d.z<<endl;//valid
	getch();
	return 0;
}
