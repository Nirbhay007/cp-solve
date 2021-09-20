n = int(input())

i = int(input())
m = int(input())

l = [int(input()) for x in range(n)]

k = []

if(m == 1):
    print(l[i])

else:
    k1, k2, k3 = l[i], l[i], l[i]

    for j in range(j, m):
        k1 += l[j]

    for j in range(1, m, -1):
        k2 += l[j]

    k3 += l[i+1]+l[i-1]
    k.append(k1)
    k.append(k2)
    k.append(k3)
    print(max(k))
