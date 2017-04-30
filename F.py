# Copyright (c) Nikita Sychev, 29.04.2017
# Licensed by MIT

a = input()
b = input()
c = input()

n = len(a)

a_new = ""
b_new = ""
c_new = ""

for i in range(n):
    unused = chr(ord('A') + ord('B') + ord('C') + ord('?')
                  - ord(a[i]) - ord(b[i]) - ord(c[i]))
    
    if a[i] == '?':
        a_new += unused
    else:
        a_new += a[i]
        
    if b[i] == '?':
        b_new += unused
    else:
        b_new += b[i]
        
    if c[i] == '?':
        c_new += unused
    else:
        c_new += c[i]

print(a_new)
print(b_new)
print(c_new)
