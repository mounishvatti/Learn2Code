#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int largest(vector<int>& arr) {
    int size = arr.size();

    int largest = INT_MIN;

    for(int i = 0; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int smallest(vector<int>& arr) {
    int size = arr.size();

    int smallest = INT_MAX;

    for(int i = 0; i < size; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int second_largest(vector<int>& arr) {
    int size = arr.size();

    if (size < 2) {
        // Handle case with less than 2 elements
        return INT_MIN; // or an appropriate value indicating no second largest
    }

    int largest = INT_MIN;
    int s_largest = INT_MIN;

    for(int i = 0; i < size; i++) {
        if(arr[i] > largest) {
            s_largest = largest;
            largest = arr[i];
        } else if(arr[i] > s_largest && arr[i] != largest) {
            s_largest = arr[i];
        }
    }
    return s_largest;
}

int second_smallest(vector<int>& arr) {
    int size = arr.size();

    if (size < 2) {
        // Handle case with less than 2 elements
        return INT_MAX; // or an appropriate value indicating no second smallest
    }

    int smallest = INT_MAX;
    int s_smallest = INT_MAX;

    for(int i = 0; i < size; i++) {
        if(arr[i] < smallest) {
            s_smallest = smallest;
            smallest = arr[i];
        } else if(arr[i] < s_smallest && arr[i] != smallest) {
            s_smallest = arr[i];
        }
    }
    return s_smallest;
}