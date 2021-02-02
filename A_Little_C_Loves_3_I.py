def findRes(n):
    a = 1
    b = 1
    c = n - 2

    if c % 3 == 0:
        while True:
            b += 1
            c -= 1
            if b % 3 != 0:
                if c % 3 != 0:
                    print(a, b, c)
                    break
    else:
        print(a, b, c)

n = int(input())
findRes(n)