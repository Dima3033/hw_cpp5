#include <iostream>
using namespace std;
struct Rectangle {
	double a;
	double b; 
	double width;
	double height; 
};
void movesquare(Rectangle& rect, double f_a, double f_b) {
	rect.a += f_a;
	rect.b += f_b;
}
void rebuildsquare(Rectangle& rect, double x, double y) {
	rect.width *= x;
	rect.height *= y;
}
void printsquare(const Rectangle& rect) {
	cout << "Rectangle equel -> " << rect.a << ", " << rect.b << ", " << rect.width << ", " << rect.height << " <-" << endl;
}
int main() {
	Rectangle rect = { 10, 8, 0, 2 };
	printsquare(rect); 
	movesquare(rect, 5, 6);
	printsquare(rect);
	rebuildsquare(rect, 18, 9);
	printsquare(rect); 
	return 0;
}
