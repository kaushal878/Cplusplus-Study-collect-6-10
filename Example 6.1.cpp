//Example 6.1: Constructor overloading
#include<iostream.h>
#include<conio.h>
class Item
{
	int code, price;
	public:
		Item()
	{//Default Constructor
		code= price =0;
	}
	Item(int c,int p)
	{//Parameterized Constructor
		code=c;
		price=p;
	}
	Item(Item &x)
	{//Copy Constructor
		code=x.code;
		price= x.price;
	}
	void display()
	{
		cout<<"Code::"<<code<<endl<<"Price::"<<price<<endl<<endl;
	}
};

int main()
{
	Item I1;
	Item I2(102,300);
	Item I3(I2);
	I1.display();
	I2.display();
	I3.display();
	getch();
	return 0;
}
