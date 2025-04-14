
x = 0
y = 0
z = 0

while x < 100:
    while y < 100:
        a = y*y*y - (2 * y) - 5
        b = x*x*x - (2*x) - 5
        if (a < 0 and b > 0) or (a > 0 and b < 0):
            z = (a+b) / 2
            if (z*z*z - (2*z) - 5) > 0 :
                if a < 0:
                    