count = 0
for i in range(1, 6):
    n = int(input())
    if n % 2 == 0:
        count = count + 1

print(f"{count} valores pares")