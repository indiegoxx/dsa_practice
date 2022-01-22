

t = (int)(input())
tests = []
for i in range(t):
    tmp = (int)(input())
    tests.append(tmp)


def checkRemovedCard(num):
    cards_removed = 0
    cards = 52
    while(cards % num != 0):
        cards = cards - 1
        cards_removed = cards_removed + 1
    return cards_removed


for nums in tests:
    print(checkRemovedCard(nums))
