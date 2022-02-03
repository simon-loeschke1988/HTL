
def f(x: float) -> float:
    return 4 -x **2
def sign(x: float) -> float:
    if x < 0:
        return -1
    elif x == 0:
        return 0
    else:
        return 1

print(f(2))



e = 1E-7
n = 0

while abs(a-b) > e:
    m = (a+b)/2
    if (sign(f(m)) == sign(f(a))):
        a = m
    else:
        b = m
    n = n +1
    print('{0} {1} {2}'.format(n,a,b))