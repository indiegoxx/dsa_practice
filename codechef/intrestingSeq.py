t = (int)(input())
tests = []

for i in range(t):
    tmp = (int)(input())
    tests.append(tmp)


def calc_res(k):
    res = 0
    while(k > 1):
        k = k / 2
        res += 1
    return res


for i in tests:
    print(calc_res(i))
