#include <iostream>
#include <cmath>

using namespace std;

double g(const double x, const double y);

int main()
{
    double r, s;
    
    
    cout << "r = "; cin >> r;
    cout << "s = "; cin >> s;
    double c = (pow(g(r, pow(s, 2) + 1), 2) + g(1, (pow(r, 2) + s))) / (1 + pow(g(1, r*s), 2));
    cout << "c = " << c << endl;
    return 0;
}
double g(const double x, const double y) {
    return (sin(x) * sin(x) + (cos(y) + cos(y))) / (1 + fabs(x * y));
}