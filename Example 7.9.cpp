//Example 7.9: Object to basic conversion
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

	operator float()
	{
		float a= feet + inch/12.0;
		return a;
	}
};
int main()
{
	distance d(8, 6);
	float x = (float)d;
	cout<<"x = "<<x;
	getch();
	return 0;
}
