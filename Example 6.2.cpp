//Example 6.1: Dynamic Constructor
#include <iostream.h>
#include<conio.h>
#include <string.h>
class String
{
char * name;
int length;
public:
String ()
{
	length = 0;
	name = new char [length = 1];
}
String (char *s)
{
	length = strlen (s);
	name = new char [length + 1];
	strcpy(name,s );
}
void display (void)
{
	cout<<"\n Name :-"<<name;
}
void join (String & a, String & b)
{
	length = a.length + b.length;
	delete name;
	name = new char [length + 1];
	strcpy (name,a.name);
	strcat (name,"");
	strcat (name,b.name);
}
};
int main()
{
	String fn("Aaryan");
	String ln("Saud");
	String n;
	n.join(fn,ln);
	n.display();
	getch();
	return 0;
}
