#include <bits/stdc++.h>
using namespace std;
// Custom comparison function
// Returns true if the first element is greater than the second
bool compare(int a, int b) {
    return a > b;
}

// Sorts the elements in increasing (ascending) order
void bubble_sort(vector<int> &a, int n) {
    // Outer loop for passes
    for (int times = 1; times <= n - 1; times++) {
        // Inner loop for repeated swapping
        for (int j = 0; j <= n - times - 1; j++) {
            // If the current element is greater than the next one, swap them
            if (compare(a[j], a[j + 1])) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
int main() {
    
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

   
}