import time

minutes = int(input("Enter minutes: "))
seconds = int(input("Enter seconds: "))

total_seconds = minutes * 60 + seconds

while total_seconds:
    mins = total_seconds // 60
    sec = total_seconds % 60

    timer = f"{mins:02d}:{sec:02d}"
    print(timer)

    time.sleep(1)
    total_seconds -= 1

print("Time's up!")