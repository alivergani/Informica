#include <iostream>
#include <cmath>
using namespace std;

double scalar (const double a[], const double k[], int n) {
    double ps=0;
    for (int i=0; i<n; i++) {
        ps+= a[i] * k[i];
    }
    return ps;
}

double norm (const double a[], int n) {
    double s=0, nor;
    for (int i=0; i<n; i++) {
        s+= pow(a[i],2);
    }
    nor = sqrt(s);

    return nor;
}

void scambia (bool &a, bool &b);

int main () {
    const int n=5;
    const double v[n] = {1,2,3,4,5}, w[n] = {10,2,4,3,2};
    double M[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    cout << "Il prodotto scalare tra i due arrays è: " << scalar(v, w, n) << endl;
    cout << "La norma degli array è: v[n] = " << norm(v, n) << " , w[n] = " << norm (w, n) << endl;

    return 0;
}
