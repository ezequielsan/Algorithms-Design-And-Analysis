#include <iostream>

using namespace std;

int Maximo(int A[], int n) {
    if (n == 1) return A[n - 1];
    else {
        int max = Maximo(A, n - 1);
        if (max > A[n - 1]) return max;
        else return A[n - 1];
    }
}

int Maximo(int A[], int s, int e) {
    if (s == e) {
        return A[s];
        
    }
    else {
        int mid = (s + e) / 2;
        int max_1 = Maximo(A, s, mid);
        int max_2 = Maximo(A, mid + 1, e);
        if (max_1 > max_2) return max_1;
        else return max_2;
    }
}

int main() {
    int A[] = {11, 9, 0, 1};

    cout << Maximo(A, 0, 3) << endl;

    return 0;
}