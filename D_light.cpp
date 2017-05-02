// Copyright (c) Nikita Sychev, 29.04.2017
// Licensed by MIT

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int min_day = 1,
        min_value,
        best_profit = 0,
        best_day_to_buy = 0,
        best_day_to_sell = 0,
        current;
    
    // читаем стоимость в первый день
    cin >> min_value;
    
    for (int day = 2; day <= n; day++) {
        cin >> current;
        
        if (current - min_value > best_profit) {
            best_profit = current - min_value;
            best_day_to_buy = min_day;
            best_day_to_sell = day;
        }
        
        if (current < min_value) {
            min_day = day;
            min_value = current;
        }
    }
    
    cout << best_day_to_buy << ' ' << best_day_to_sell;
    return 0;
}
