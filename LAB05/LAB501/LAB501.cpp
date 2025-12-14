#include<iostream>
#include<string>
using namespace std;

	double circleArea(double radius)
	
{
		return 3.14 * radius * radius;
}
	double rectArea(double width, double height)
{
		return width * height;
}
int main()
{
	double radius; 
	double result; 

	cout << "Enter the radius : ";
	cin >> radius; 

	result = circleArea(radius); 
	cout << "the area of circle is : " << result << endl; 

	double width, height; 
	cout << "enter width : ";
	cin >> width;
	cout << "enter height : ";
	cin >> height;
	result = width * height; 
	cout << "the area of rectangle is : " << result << endl; 

	return 1;
}