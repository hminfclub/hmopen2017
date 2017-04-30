// Copyright (c) Nikita Sychev, 29.04.2017
// Licensed by MIT

var
    n, day, min_index, best_profit, best_day_to_buy, best_day_to_sell: longint;
    a: array[1..50000] of longint;
begin
    read(n);
    for day := 1 to n do
        read(a[day]);
    
    min_index := 1;
    best_profit := 0;
    best_day_to_buy := 0;
    best_day_to_sell := 0;
    
    for day := 2 to n do begin
        if a[day] - a[min_index] > best_profit then begin
            best_profit := a[day] - a[min_index];
            best_day_to_buy := min_index;
            best_day_to_sell := day;
        end;
        
        if a[day] < a[min_index] then
            min_index := day;
    end;
    
    write(best_day_to_buy, ' ', best_day_to_sell);
end.
            