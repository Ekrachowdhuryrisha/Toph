#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    long long p = 1;
    int Count = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] != 0) {
            p *= a[i];
        } else {
            Count++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (Count == 0) {
            cout << p / a[i];
        } else if (Count == 1) {
            if (a[i] == 0) {
                cout << p;
            } else {
                cout << 0;
            }
        } else {
            cout << 0;
        }

        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
