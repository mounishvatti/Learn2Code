def check(n, i):
    if (n and (1 << i)) > 0:
        return True
    else:
        return False

n = 13
i = 2

print(check(n, i))
