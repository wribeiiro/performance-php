import time

start_time = time.time()

test = 0
total = 10_000_000
i = 0

while i < total:
    test = i
    i += 1

end_time = time.time()

print (end_time - start_time)
