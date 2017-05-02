// Copyright (c) Nikita Sychev, 29.04.2017
// Licensed by MIT

var
    n, day, min_day, min_value, best_profit, best_day_to_buy, best_day_to_sell, current: longint;
begin
    read(n);
    
    min_day := 1;
    best_profit := 0;
    best_day_to_buy := 0;
    best_day_to_sell := 0;
    
    read(min_value);
    
    for day := 2 to n do begin
        read(current);
        
        if current - min_value > best_profit then begin
            best_profit := current - min_value;
            best_day_to_buy := min_day;
            best_day_to_sell := day;
        end;
        
        if current < min_value then begin
            min_value := current;
            min_day := day;
        end;
    end;
    
    write(best_day_to_buy, ' ', best_day_to_sell);
end.
