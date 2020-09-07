def main():

    print("Enter 3 numbers!")

    n1 = int(input())
    n2 = int(input())
    n3 = int(input())

    s = n1 + n2 + n3

    if s >= 100:
        print("The sum is greater than or equal to 100")
    else:
        print("The sum is less than 100")

main()