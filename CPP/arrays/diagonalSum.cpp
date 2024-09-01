#include <iostream>
using namespace std;

int diagonalSum(int **arr, int m, int n) {
    int extras = 0;

    if (m > n) {
        extras = m - n;
    } else {
        extras = n - m;
    }

    int sum = 0;

    for (int i = 0; i < min(m, n); i++) {
        sum += arr[i][i];
    }

    return sum + extras;
}

int main() {
    int m, n;

    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;

    // Dynamically allocate a 2D array
    int **arr = new int *[m];
    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The sum of the diagonal is: " << diagonalSum(arr, m, n) << endl;

    // Deallocate memory
    for (int i = 0; i < m; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}