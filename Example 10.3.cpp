//Example 10.3: Program that displays use of different stream manipulators.
#include <iostream.h>
#include <iomanip.h>
#include<conio.h>
int main(void)
{
	int I = 100;
	cout << setfill('.');
	cout << setiosflags(ios::left);
	cout << setw(20) << "Decimal";
	cout << resetiosflags(ios::left);
	cout << setw(6) << dec << I << endl;
	cout << setiosflags(ios::left);
	cout << setw(20) << "Hexadecimal";
	cout << resetiosflags(ios::left);
	cout << setw(6) << hex << I << endl;
	cout << setiosflags(ios::left) <<endl;
	cout << setw(20) <<"Octal";
	cout << resetiosflags(ios::left);
	cout << setw(6) << oct << I << endl;
	getch();
	return 0;
}
