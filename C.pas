// Copyright (c) Nikita Sychev, 29.04.2017
// Licensed by MIT

var
    ans: int64;
    i, n, k: longint;
begin
    read(n, k);
    ans := sqr(k - 1);
    for i := 1 to n - 2 do
        ans := ans * k;
    write(ans);
end.