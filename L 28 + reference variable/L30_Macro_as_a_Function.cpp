#include <iostream>
using namespace std;

// Macro definition
#define AREA(l, b) (l * b)

int main()
{
	int l = 10, b = 5, area;

	// Find the area using macros
	area = AREA(l, b);

	cout << "Area of rectangle"<< " is: "<<area;

	return 0;
}


// #include <iostream>
// using namespace std;

// // Macro definition
// #define PI 3.14
// #define AREA(PI, r) (PI*r*r)

// int main()
// {
// 	double radius = 3; 
// 	double area;
// 	area = AREA(PI, radius);
// 	cout << "Area of the circle"<< " is: "<<area;
// 	return 0;
// }
