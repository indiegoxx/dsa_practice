t = (int)(input())
tests = []

for i in range(t):
    tmp = input()
    tests.append(tmp)


def check_result(str):
    tmp = list(map(int, i.split()))
    x = tmp[0]
    y = tmp[1]
    z = tmp[2]
    return (z - y) * x


for i in tests:
    print(check_result(i))
