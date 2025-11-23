#include <iostream>
#include <iomanip>

using namespace std;

int calculateSum(int** A, int m, int n) {
    int totalSum = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            totalSum += A[i][j];
        }
    }
    return totalSum;
}

int main() {
    int m, n;
    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;

    int** A = new int* [m];

    for (int i = 0; i < m; i++) {
        A[i] = new int[n];
    }

    cout << "Enter the matrix elements (" << m * n << " values):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    int totalSum = calculateSum(A, m, n);

    cout << "\nTotal sum of matrix elements: " << totalSum << endl;

    for (int i = 0; i < m; i++) {
        delete[] A[i];
    }
    delete[] A;

    return 0;
}

