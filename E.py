# Copyright (c) Nikita Sychev, 29.04.2017
# Licensed by MIT

import sys

n = int(input())

left = 1
right = n
found = False

while not found:
    query = (left + right) // 2
    print(query)
    sys.stdout.flush()
    
    response = int(input())
    
    if response == 0:
        found = True
    elif response == -1:
        right = query - 1
    else:
        left = query + 1
