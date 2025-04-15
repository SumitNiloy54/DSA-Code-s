 //Sorting (Bubble Sort)
 #include <bits/stdc++.h>
#include <vector>
#include <algorithm>  // For sort()
using namespace std;

int main() {
    vector<int> arr = {5, 1, 4, 2, 8};

    sort(arr.begin(), arr.end());  // In-built sorting function

    cout << "Sorted array: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
