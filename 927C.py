
t = int(input())
for _ in range(t):
        n, m = map(int, input().split())
        v = list(map(int, input().split()))
        s = input()

        allp = 1
        for i in range(n):
            allp *= v[i]

        print(allp % m, end=" ")

        j = n - 1
        i = 0
        x = -1

        p = n

        for k in range(p - 1):
            if s[x + k + 1] == 'L':
                curr = (allp // v[i]) % m
                print(curr, end=" ")
                allp //= v[i]
                i += 1
            elif s[x + k + 1] == 'R':
                curr = (allp // v[j]) % m
                print(curr, end=" ")
                allp //= v[j]
                j -= 1

        print("\n\n")


