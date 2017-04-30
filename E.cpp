// Copyright (c) Nikita Sychev, 29.04.2017
// Licensed by MIT

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int left = 1, right = n;
    bool found = false;
    
    while (!found) {
        int query = (left + right) / 2;
        cout << query << endl;
        
        int response;
        cin >> response;
        
        if (response == -1)
            right = query - 1;
        else if (response == 1)
            left = query + 1;
        else
            found = true;
    }
    
    return 0;
}