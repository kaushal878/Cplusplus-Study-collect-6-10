//Example 7.2: Overloading increment Operator using friend function
#include<iostream.h>
#include<conio.h>
class rectangle
{
	private:
	int length;
	int breadth;
	public:
	rectangle(int l, int b)
	{
		length = l;
		breadth = b;
	}
	friend void operator ++(rectangle&);

	void display()
	{
		cout<<"Length = "<<length<<endl
		    <<"Breadth = "<<breadth;
	}
};
void operator ++(rectangle& r)
{
		++r.length;
		++r.breadth;
}

int main()
{
	rectangle r1(5, 6);
	++r1;     //operator ++(r1);
	r1.display();
	getch();
	return 0;
}
