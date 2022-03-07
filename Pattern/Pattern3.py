n = int(input("Enter the row: "))
for row in range(1, n+1, 1):
    for col in range(1, row+1, 1):
        print(col, end=" ")
    print("\r")

for row in range(n-1, 0, -1):
    for col in range(1, row+1, 1):
        print(col, end=" ")
    print("\r")