n = int(input("Enter the value of n: "))
q = int(input("Enter the common ratio q: "))
arr = []
for i in range(n):
    arr.append(int(input("Enter the number at position {}: ".format(i+1))))

count = 0
for i in range(n):
    for j in range(i+1, n):
        a = arr[i]
        b = arr[j]
        if b % a != 0:
            continue
        r = b // a
        if r != q:
            continue
        count += 1
        c = b
        while c <= arr[-1]:
            c *= q
            if c in arr:
                count += 1
            else:
                break

print("Total number of sub-geometric progressions:", count)
