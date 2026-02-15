num = int(input("enter a number 1 - 10 : "))

while num < 1 or num >= 10:
    print(f"{num} is invalid")
    num = int(input("enter a number 1 - 10 : "))

print("hii")