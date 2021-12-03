#include <iostream>
using namespace std;

int main () {
    double x = 5.4;
    double *p = NULL;

    cout << x << endl;
    cout << &x << endl;
    cout << p << endl;
    cout << &p << endl;

    p = &x;
    cout << p << endl; 

    cout << endl;

    cout << "Inserire una variabile di tipo double: " << endl;
    cin >> *p;

    cout << "x =" << x << endl;

    double *a = new double[10];
    for (int i=1; i < 10; i++) {
        cout << &a[i] << endl;
       //cout << &a[i] - &a[i-1] << endl;
    }

    delete a;

    return 0;   
}