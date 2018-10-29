from cs50 import get_int

i = get_int()
if i < 0:
    print("negative")
elif i > 0:
    print("positive")
else:
    print("zero")
