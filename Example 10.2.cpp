//Example 10.2: Basic Program File Structure and Sample Function Call with stream I/O
#include <iostream.h>
#include <iomanip.h>
#include<conio.h>
float sum(float required_term, float optional_term = 0.0);
int main(void)
{
	int p;
	float a;
	float b;
	cout.setf(ios::showpoint);
	cout<<"Enter the output precision (an integer):";
	cin>>p;
	if (!cin)
	{
		cout<<"Input error.\n";
		return 1;
	}
	cout<<setprecision(p);
	cout<<"Enter two real numbers to be summed:";
	cin >>a>>b;
	if (!cin)
	{
		cout<<"Input error\n";
		return 2;
	}
	cout<<"Entered values: a =" <<a<<"and b ="<<b<<endl;
	cout<<"sum(a, b)= "<<sum(a,b)<< endl;
	cout<< "sum(a)="<<sum(a)<<endl;
	getch();
	return 0;
}
// Define the sum function.
float sum(float x, float y)
{
	return (x + y);
}
