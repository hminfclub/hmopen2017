// Copyright (c) Nikita Sychev, 29.04.2017
// Licensed by MIT

var
    a, b, c: string;
    n, i: longint;
    unused: char;
begin
    readln(a);
    readln(b);
    read(c);
    
    n := length(a);
    
    for i := 1 to n do begin
        unused := chr(ord('A') + ord('B') + ord('C') + ord('?')
                        - ord(a[i]) - ord(b[i]) - ord(c[i]));
        
        if a[i] = '?' then 
            a[i] := unused;
        if b[i] = '?' then 
            b[i] := unused;
        if c[i] = '?' then 
            c[i] := unused;
    end;
    
    writeln(a);
    writeln(b);
    writeln(c);
end.