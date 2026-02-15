#include<brain.h>
data = input("Enter your sentence: ").lower()

vowels = data.count("aeiou")

rever = data[::-1]
print("reversed name is ",rever)
for i in data:
    print(rever)