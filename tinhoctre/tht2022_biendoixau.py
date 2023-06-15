# https://tinhoctre.vn/problem/tht2022_biendoixau
s = input()
m = int(input())

for i in range(0, m):
    instruction = input().split(" ")
    newPart = s[int(instruction[0]):int(instruction[1]) + 1].replace(instruction[2], instruction[3])
    s = s[:int(instruction[0])] + newPart + s[int(instruction[1]) + 1:]

