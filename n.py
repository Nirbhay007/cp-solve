lt = map(int, input().split())
# for i in range(mapint(input())):
#     lt.append(int(input()))


def find_max_sum(arr):
    i = 0
    e = 0
    for x in arr:
        ne = e if e > i else i
        i = e + x
        e = ne

    return (e if e > i else i)


print(find_max_sum(lt))
