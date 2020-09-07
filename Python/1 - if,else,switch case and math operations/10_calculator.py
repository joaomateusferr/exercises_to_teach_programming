def main():

    a = int(input("Enter a number: "))
    op = input("Enter a operation (+,-,*,/): ")
    b = int(input("Enter another number: "))

    
    if op == '+':
        result = a+b
    elif op == '-':
        result = a-b
    elif op == '*':
        result = a*b
    elif op == '/':
        if b != 0: 
            result = a/b
        else:
            result = "Erro"
    else:
        result ="invalid operation"

    print("Result = " + str(result));
    
main()
