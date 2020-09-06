salary = float(raw_input('Enter salary amount!: '))

if salary < 500:
    readjustment = salary*0.15
else:
    if salary < 1000:
        readjustment = salary*0.1
    else:
        readjustment = salary*0.05

#print("The salary readjustment is ${readjustment:.2f}")
#print("The new salary is $%.2f"%salary+readjustment)