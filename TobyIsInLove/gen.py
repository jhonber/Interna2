from random import randint as rd

love = "love"
n = 100
max_size = 1000

print (n)

def gen_word():
    size = rd(4, 8)
    word = ""
    for i in range(0, size):
        l = chr(rd(ord('a'), ord('z')))
        word = word + l
    return word

for i in range(0, 30):
    print("love" * (i + 1))

cnt = 50
for i in range(0, 20):
    print("love" * cnt)
    cnt = cnt + 10


for i in range(0, 40):
    size = rd(1,20)
    out = ""
    for j in range(0, size):
        w = ""
        if rd(0,10) % 3 == 0:
            w = love
        else:
            w = gen_word()

        if len(out + w) <= max_size:
            out = out + w
    print (out)

print("lov")
print("iinlovewithyou")
print("youaremylov")
print("whatisthefuckingproblemwithyoulov")
print("tobyiloveyousomuch")
print("l")
print("lo")
print("looove")
print("looveeee")
print("love" * 250)
