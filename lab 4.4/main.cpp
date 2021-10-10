#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x, y, xp, xk, dx, R;
    double pi = atan(1)*4;
    
    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"<< setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;
    
    x = xp;
    while (x <= xk)
    {
        
        if(x < (-7-R) || ((-7+R)<x && x<=-4))
            y = R;
        else if (x>= (-7-R) && x<=(-7+R))
            y = R - sqrt(R*R - pow(x + 7, 2));
        else if (x >-4 && x < 0)
            y = (-1)*(x*R/4);
        else if (x >= 0 && x <= pi)
            y = sin(x);
        else
            y = x - pi;
        
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y << " |" << endl;
        x += dx; }
    cout << "---------------------------" << endl;
    
    return 0;}
