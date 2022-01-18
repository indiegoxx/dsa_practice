
a = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]
a.reverse()
print(a)
inp = (int)(input("enter the serach Item : "))


def bin_search(query, a):
    found = False
    i = 0
    mid = -1
    ub = a.__len__()
    lb = 0
    while(mid != 0 or mid == a.__len__()):
        mid = (int)((ub + lb) / 2)
        print(f" iteration = {i}  mid = {mid}")
        i += 1
        if(a[mid] == query):
            print(f"{query} found at {mid}")
            found = True
            return found
        elif(a[mid] > query):
            lb = mid
        else:
            ub = mid
    return found


if bin_search(inp, a):
    pass
else:
    print("Not Found")
