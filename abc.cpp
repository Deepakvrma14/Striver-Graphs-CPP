#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// int getValue(string s) {
//     int value = 0;
//     for (char c : s) {
//         if (isdigit(c)) {
//             value = value * 10 + (c - '0');
//         }
//     }
//     return (value == 0) ? s.length() : value;
// }

// long long maxProductOfValues(vector<string> arr) {
//     int n = arr.size();
//     long long max1 = 0, max2 = 0;

//     for (int i = 0; i < n; i++) {
//         int value = getValue(arr[i]);
//         if (value > max1) {
//             max2 = max1;
//             max1 = value;
//         } else if (value > max2) {
//             max2 = value;
//         }
//     }

//     return max1 * max2;
// }

int main() {
    int n;
    cin >> n;
    // vector<string> arr(n);
    
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    // long long result = maxProductOfValues(arr);
    cout << n << endl;
    
    return 0;
}