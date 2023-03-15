//Example 7.6: Overloading comparision (less than) operator
#include<iostream.h>
#include<conio.h>
class Time
{
	int hr,min;
	public:
	void getdata()
	{
		cout<<"Enter hour and minute"<<endl;
		cin>>hr>>min;
	}
	int operator <(Time t)
	{
		int ft, st;//first time and second time
		ft=hr*60+min;//convert into minute
		st=t.hr*60+t.min;
		if(ft<st)
			return 1;
		else 
             return 0;
	}
};
int main()
{
	Time t1,t2;
	t1.getdata();
	t2.getdata();
	if(t1<t2)
	cout<<"t1 is less than t2"<<endl;
	else
	cout<<"t1 is greater or equal to t2"<<endl;
	getch();
	return 0;
}
