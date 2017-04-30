// Copyright (c) Nikita Sychev, 29.04.2017
// Licensed by MIT

var
    n, left, right, query, response: longint;
    found: boolean;
begin
    read(n);
    
    left := 1;
    right := n;
    found := false;
    
    while not found do begin
        query := (left + right) div 2;
        writeln(query);
        flush(output);
        
        read(response);
        
        if response = 0 then
           found := true
        else if response = -1 then
           right := query - 1
        else
           left := query + 1;
    end;
end.