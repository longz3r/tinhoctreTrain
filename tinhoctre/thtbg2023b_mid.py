#https://tinhoctre.vn/problem/thtbg2023b_mid

input = input()
input = input.split(" ")
a = int(input[0])
b = int(input[1])
min = [1e+9, 1e+9]

for i in range(a + 1, b):
    if abs(i * a - i * b) < min[0]:
        min[0] = abs(i * a - i * b)
        min[1] = i

print(min[1])