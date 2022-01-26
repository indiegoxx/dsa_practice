from random import randint


t = (int)(input())
tests = []

for i in range(t):
    tmp = (int)(input())
    tests.append(tmp)


def check_result(str):
    x = randint(1, 9)
    if(str-x > 0):
        print(f"{str-x} {str} {str+x}")
    else:
        check_result(str)


for i in tests:
    check_result(i)
