//Example 6.3: Constructor with default arguments
#include <iostream.h>
#include <conio.h>
class interest
{ 
	int principal, rate, year;
	float amount;
	public:
	interest (int p, int n, int r=10);
	void cal (void);
};
interest::interest (int p, int n, int r)
{
	principal = p; year = n; rate = r;
}
void interest::cal (void)
{
	cout<<"Principal="<<principal<<endl;
	cout <<"Rate="<<rate<<endl;
	cout<<"Year="<<year<<endl;
	amount = principal+(float) (principal*year*rate)/100;
	cout<<"Amount="<<amount<<endl;
}
int main ( )
{
	interest i1(1000,2);
	interest i2(1000, 2,15);
	i1.cal();
	i2.cal();
	getch();
	return 0;
}
