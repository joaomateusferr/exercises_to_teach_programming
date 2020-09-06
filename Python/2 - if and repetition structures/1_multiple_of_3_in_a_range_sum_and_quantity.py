s = 0
cont = 0

print("Multiples of 3 in the range 1 to 20\n\n");

for i in range(1, 21):
    
    if (i % 3 == 0): #the % operation can only be used with integer values
        print("Multiple - " + str(i))
        s = s + i
        cont = cont + 1

print("\nThere are " + str(cont) + " multiples and the sum of them is " + str(s))