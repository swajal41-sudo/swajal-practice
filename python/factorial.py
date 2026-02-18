def fct(n):
    if n == 0 or n == 1:
        return 1
    return n * fct(n - 1)

#main

while True:
 num = int(input("Enter a number: "))
 if num < 0:
     print("negative integers does not have factorial try again")
 else:
    print(f"Factorial of {num} is = {fct(num)}")
    break
