#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int temp[1000];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }
    sort(temp, temp + n);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (temp[i] != arr[i]) {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}