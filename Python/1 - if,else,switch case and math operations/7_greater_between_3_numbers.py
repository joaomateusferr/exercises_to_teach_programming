print("Enter 3 numbers!")

a = int(input())
b = int(input())
c = int(input())

greater = a

if b > greater:
    greater = b

if c > greater:
    greater = c

print(str(greater) + " is the greater")