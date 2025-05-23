n = int(input())

original = n
count = 0

while True:
    a = n//10
    b = n%10
    c = a + b
    n = (b*10) + (c%10)
    count +=1
    if original == n:
        break
print(count)