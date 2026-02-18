name = input("Enter name: ")
if  len(name) > 12:
    print("name cant more than 12 letters ")
elif not(name.find(" "))  == -1:
    print("name must not contain spaces ")
elif not name.isalpha():
    print("can not have numbers")

else:
    print(f"{name} is name is valid name ")
