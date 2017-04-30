// Copyright (c) Nikita Sychev, 29.04.2017
// Licensed by MIT

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    // Элементы массива нумеруются с нуля,
    // поэтому будем нумеровать дни с нуля,
    // а вариант без прибыли обозначим
    // как "-1 -1" и не забудем потом
    // прибавить единицы к номерам дней
    
    int min_index = 0,
        best_profit = 0,
        best_day_to_buy = -1,
        best_day_to_sell = -1;
    
    for (int day = 1; day < n; day++) {
        if (a[day] - a[min_index] > best_profit) {
            best_profit = a[day] - a[min_index];
            best_day_to_buy = min_index;
            best_day_to_sell = day;
        }
        
        if (a[day] < a[min_index])
            min_index = day;
    }
    
    cout << best_day_to_buy + 1 << ' ' << best_day_to_sell + 1;
    return 0;
}