def main():

    salary = float(input('Enter salary amount!: '))

    if salary < 500:
        readjustment = salary*0.15
    else:
        if salary < 1000:
            readjustment = salary*0.1
        else:
            readjustment = salary*0.05

    print("The salary readjustment is $" + str(round(readjustment,2)))
    print("The new salary is $" + str(round(salary + readjustment,2)))

main()
