#include <iostream>
#include <cmath>
using namespace std;

double distanza (double x, double y, 
                const double xc, const double yc) {
    return sqrt(pow(x-xc,2) + pow(y-yc,2));
}

void check_circle (double x, double y, 
                    const double xc, const double yc, 
                    const double r, bool &status) {
    const double d = distanza(x, y, xc, yc);
    if (d <= r) {
        status = true;
    } else {
        status = false;
    }
                    }

int main () {
    const double xc=1, yc=1, r=1;
    double x, y;
    bool status;
    
    for (;;) {
        cout << "Introdurre coordinate del punto ( x, y ): " << endl;
        cin >> x >> y;
        if (cin.eof()) break;
       
       check_circle(x, y, xc, yc, r, status);
       if (status) {
       cout << "Il punto è dentro al cerchio" << endl;
       } else {
       cout << "Il punto è fuori dal cerchio" << endl;
       } 
    }
    return 0;
}