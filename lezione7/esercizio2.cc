#include <iostream>
using namespace std;

void print_array(int a[], int len) {
    for (int i=0; i<len; i++ ) {
        cout << a[i] << endl;
    }    
}

int max_array (int l[], int lun) {
    int max=l[0];

    for (int i=0; i<lun; i++) {
        if (max < l[i]) {
            max = l[i];
        }
    }

    return max;
}

int min_array(const int a[], int n) {
  double min = a[0];
  
  for (int i = 1; i < n; i++) {
    if (a[i] < min) {
      min = a[i];
    }
   }
  return min;
}

void min_max_array(int a[], int n, int &min, int &max) {
  max = max_array(a, n);
  min = min_array(a, n);
}

void sort_array(int a[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i] > a[j]) {
                const int vmag = a[i];
                a[i]=a[j];
                a[j]=vmag;
            }
        }
    }
}

int main () {
    const int n=10;
    int v[n] = {9, 2, 1, 3, 4, 7, 0, 11, 20, 5};

    print_array (v, n);

    int min, max; 
    cout << "Il minimo è: " << min << "\nIl massimo è: " << max << endl;

    sort_array(v, n);
    print_array(v, n);

    return 0;
}