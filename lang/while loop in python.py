name = input("Enter your name: ")

while True:
    age = int(input("Enter your age: "))
    if age <= 0:
        print(f"{name}! don't lie")
    else:
        print(f"Hello! {name}")
        break