/*
     ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
     उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm> // Required for std::swap
#include <ctime>     // Required for clock()
using namespace std;

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl

inline int power(int a, int b)
{
	int x = 1;
	while (b)
	{
		if (b & 1) x *= a;
		a *= a;
		b >>= 1;
	}
	return x;
}
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
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;

void solve() {
	    // Get the size of the array from the user
    int n;
    cin >> n;
    
    // Create a vector of size 'n', initialized with zeros
    vector<int> arr(n, 0);

    // Initialize the vector with a reverse-sorted array (e.g., for n=5, arr = {5, 4, 3, 2, 1})
    for (int i = 0; i < n; i++) {
        arr[i] = n - i;
    }

    // Measure the execution time of the bubble sort algorithm
    auto start_time = clock();
    sort(arr.begin(),arr.end());
    auto end_time = clock();

    // Output the time elapsed in clock ticks
    cout << end_time - start_time << endl;
	

}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt",  "r",  stdin);
	freopen("output.txt", "w", stdout);
#endif

	clock_t z = clock();

	int t = 1;
	// cin >> t;
	while (t--) solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;
}