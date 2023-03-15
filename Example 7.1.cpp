//Example 7.1: Overloading pre-increment operator
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
		void operator ++() 
{
			++length;
			++breadth;
		}
		void display()
 {
			cout<<"Length = "<<length<<endl
			    <<"Breadth = "<<breadth;
		}
};

int main() 
{
	rectangle r1(5, 6);
	++r1;     //equivalent to r1.operator ++();
	r1.display();
	getch();
}
