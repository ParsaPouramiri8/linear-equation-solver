print("ax + b")

a = int(input("a: "))
b = int(input("b: "))

print("\n")

if a == 0 and b == 0:
    print("y = 0")
elif a == 0:
    print(f"y = {b}")

elif b == 0: # o
    if a == 0:
        print("y = x")
    else:
        print(f"y = {a}x")
else:
    if a == 1:
        print(f"y = x + {b}")
    else:
        print(f"y = {a}x + {b}")

print(f"x = {-(b / a)}")
