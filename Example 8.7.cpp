//Example 8.7: Derived Class Constructor
#include<iostream.h>
#include<conio.h>
class A 
{
	protected:
	int adata;
	public:
	A(int a) 
{
		adata = a;
	}
};
class B :  public A 
{
	int bdata;
	public:
	B(int a, int b) : A(a) 
{
		bdata = b;
	}
	void showdata() 
{
		cout<<"adata = "<<adata<<endl <<"bdata = "<<bdata;
	}
};
int main()
{
	B b(5, 6);
	b.showdata();
	getch();
	return 0;
}
