// Copyright (c) Nikita Sychev, 29.04.2017
// Licensed by MIT

#include <iostream>

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    
    int n = a.length();
    
    for (int i = 0; i < n; i++) {
        char unused = char(int('A') + int('B') + int('C') + int('?')
                            - int(a[i]) - int(b[i]) - int(c[i]));
        if (a[i] == '?')
            a[i] = unused;
        
        if (b[i] == '?')
            b[i] = unused;
        
        if (c[i] == '?')
            c[i] = unused;
    }
    
    cout << a << endl << b << endl << c;
    return 0;
}