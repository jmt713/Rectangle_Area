#include <iostream>
#include <conio.h>

using namespace std;



int GetLengthFromUser()
{
	int length;
	cout << "Please enter the length: ";
	cin >> length;
	return length;
	

}

int GetWidthFromUser()
{
	int width;
	cout << "Please enter the width: ";
	cin >> width;
	return width;

}

int CalculateArea(int length, int width) {

	int area = length * width;
	return area;

}


void DisplayArea(int area) {

	
	cout << "The area of the rectangle is: " << area;

}

int main()
{
	int l = GetLengthFromUser();

	int w = GetWidthFromUser();

	int a = CalculateArea(l, w);

	DisplayArea(a);

	(void)_getch;
	return 0;
}
