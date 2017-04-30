# Copyright (c) Nikita Sychev, 29.04.2017
# Licensed by MIT

n = int(input())
a = list(map(int, input().split()))

# Python нумерует элементы с нуля,
# поэтому будем считать дни с нуля,
# а вариант без прибыли хранить как "-1 -1",
# при выводе не забудем прибавить 1 к номерам дней

min_index = 0

best_profit = 0
best_day_to_buy = -1
best_day_to_sell = -1

for day in range(1, n):
    if a[day] - a[min_index] > best_profit:
        best_profit = a[day] - a[min_index]
        best_day_to_buy = min_index
        best_day_to_sell = day
    
    if a[day] < a[min_index]:
        min_index = day

print(best_day_to_buy + 1, best_day_to_sell + 1)