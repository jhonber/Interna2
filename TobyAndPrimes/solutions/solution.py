import itertools

T = int(input())

MX = 10000
primes = []

def gen_primes (MX):
    primes.append(2)
    for i in range(3, MX, 2):
        f = True
        j = 2
        while (j * j <= i):
            if i % j == 0:
                f = False
                break
            j = j + 1
        if f:
            primes.append(i)

def int_to_vec (n):
    v = []
    while int(n) > 0:
        v.append(int(n % 10))
        n /= 10

    v.reverse()
    return v

def list_to_int (v):
    v = v[::-1]
    r = 0
    p = 1
    for i in v:
        r += p * i
        p *= 10
    return r

gen_primes(MX)

for i in range(T):
    n = int(input())
    v = int_to_vec(n)
    perm = list(itertools.permutations(v, len(v)))

    ok = False
    for cur in perm:
        if (cur[0] == 0): continue
        cur = list_to_int(cur)
        for p in primes:
            if cur == p:
                ok = True
                break
        if ok: break
    
    if ok: print("YES")
    else: print("NO")
