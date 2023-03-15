//Example 6.4: Program showing destructor calling
#include<iostream.h>
#include<conio.h>
class Test
{
	private:
	int x,y;
	public:
	Test()
	{
		x=0;
		y=0;
		cout<<"Memory is allocated"<<endl;
	}
	~Test()
	{
		cout<<"x="<<x<<"\t"<<"y="<<y<<"\t"<<endl;
		cout<<"Memory is deallocated"<<endl;
	}
};
int main()
{
	
	{
		Test p;
	}//life time of p finishes here, and destructor is called
   getch();
   return 0;
}
