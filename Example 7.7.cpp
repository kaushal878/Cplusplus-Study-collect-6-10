//Example 7.7: String Concatenation
#include<iostream.h>
#include<string.h>
#include<conio.h>
class String
{
	char *s;
	int l;//length of string
	public:
	void getdata()
	{
		char str[20];
		cout<<"Enter a string"<<endl;
		cin>>str;
		l=strlen(str);
		s=new char[l+1];
		strcpy(s,str);
	}
	void display()
	{
		cout<<s<<endl;
	}
	String operator+(String x)
	{
		String temp;
		temp.s=new char[l+x.l+1];
		strcpy( temp.s,s);
		strcat(temp.s, x.s);
		return temp;
	}
};
int main()
{
	String s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3=s1+s2;
	cout<<"s3=";
	s3.display();
	getch();
	return 0;
}
