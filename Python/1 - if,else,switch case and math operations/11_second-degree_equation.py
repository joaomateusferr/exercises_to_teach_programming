import math

def main():

    print("Enter the values of a b and c from a 2 degree equation")

    a = float(input("Enter the a value: "))
    b = float(input("Enter the b value: "))
    c = float(input("Enter the c value: "))

    print("Your equation is: " + str(a) + "x2 + " + str(b) + "x + " + str(c))

    delta=(b*b)-(4*a*c)

    x1=((-b)+ math.sqrt(delta))/(2*a)
    x2=((-b)- math.sqrt(delta))/(2*a)

    if delta > 0:
        print("x1 = " + x1)
        print("x2 = " + x2)
    else: 
        if delta == 0:
            print("x1 = x2 = " + x1)
        else:
            print("There is no root")

main()


    

    
