#calculate the power of number.n is base and e is the exponent
def power(n, e):
    if e == 0:
        return 1
    elif e == 1:
        return n
    else:
        return (n*power(n, e-1))
n = 4
p = 2
print(power(n, p))
