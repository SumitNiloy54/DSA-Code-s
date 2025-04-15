//Find Maximum from an Array.
#include <iostream>
#include <vector>
#include <algorithm>  // For max_element
using namespace std;
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int &x : arr) cin >> x;
    cout << "Maximum value: " << *max_element(arr.begin(), arr.end()) << endl;
    cout << "Maximum value: " << *min_element(arr.begin(), arr.end()) << endl;
    return 0;
}
