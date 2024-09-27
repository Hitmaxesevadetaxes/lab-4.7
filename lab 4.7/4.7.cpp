#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double xp, xk, x, dx, eps, a, S;
    int n;

    
    cout << "xp = "; cin >> xp; //xp = 0  xk = 2  dx = 0.5  eps = 0.00001
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    
    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "exp(-x)" << " |"
        << setw(10) << "S" << " |"
        << setw(5) << "n" << " |" << endl;
    cout << "-------------------------------------------------" << endl;

    
    x = xp;
    while (x <= xk) {
        n = 0;         
        a = 1;          
        S = a;          
        
        do {
            n++;
            a *= -x / n;  
            S += a;       
        } while (abs(a) >= eps); 

       
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(10) << setprecision(5) << exp(-x) << " |"
            << setw(10) << setprecision(5) << S << " |"
            << setw(5) << n << " |" << endl;

        x += dx; 
    }

    cout << "-------------------------------------------------" << endl;
    return 0;
}
