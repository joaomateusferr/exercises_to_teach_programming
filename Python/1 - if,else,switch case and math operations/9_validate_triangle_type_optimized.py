def main():

    print("Enter sides of the triangle")

    a = int(input())
    b = int(input())
    c = int(input())

    if a < b + c and b < a + c and c < a + b:

        if a == b and b == c:
            print("Equilateral triangle");
        else:
            if a != b and b != c:
                print("Scalene triangle");
            else:
                print("Isosceles triangle")
    else:
        print("It's not a triangle")

main()

 
