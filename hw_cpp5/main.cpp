#include <iostream>
#include <cmath>
using namespace std;
struct dimensional峱ordinate球stem {
	double x;
	double y; 
};
double locate(const dimensional峱ordinate球stem& p1, const dimensional峱ordinate球stem& p2) {

    return sqrt(dx * dx + dy * dy);
}
int main() {
    dimensional峱ordinate球stem p1 = { -5, 5 };
    dimensional峱ordinate球stem p2 = { 4, -1};
    double dist = locate(p1, p2);
    cout << "Distance equel ->" << p1.x << "," << p1.y << " and " << p2.x << "," << p2.y << " <- " << dist << endl;
    return 0;
}
