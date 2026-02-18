import time

my_time = int(input("Set your bomb's timer in seconds: "))

for i in (range(my_time,0,-1)):
    print(f"tick tick {i}")
    time.sleep(1)

print("Allhuakbarr")
print("boom")

