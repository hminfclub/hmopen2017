// Copyright (c) Nikita Sychev, 29.04.2017
// Licensed by MIT

#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    long long ans = (k - 1) * (k - 1);
    for (int i = 2; i < n; i++)
        ans *= k;
    cout << ans;
    return 0;
}