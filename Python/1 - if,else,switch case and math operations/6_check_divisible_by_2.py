def main():

    n = int(input('Insert a number: '))

    #the % operation can only be used with integer values
    if n % 2 == 0:
        print("Is divisible by 2")
    else:
        print("It is not divisible by 2")    

    #being divisible by 2 is the same as being even and not being divisible by 2 is the same as being odd

main()