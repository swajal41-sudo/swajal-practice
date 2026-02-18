#include<brain.h>
pin = 1807
balance = 69000
while True:
  q = int(input("Enter your pin: "))
  if pin == q:
    wid = int(input("How much do want to withdrawal: "))
    if wid <= balance:
        if wid <= 20000:
            balance = balance - wid
            print("Withdrawal Successful")
            print(f"Your balance is {balance}")
        else:
            print("daily limit is 20000")
    else:
        print("your balance is low")
    break
  else:
     print("You have entered a wrong number")
