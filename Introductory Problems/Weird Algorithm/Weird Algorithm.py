def solve(n):
    print(n, end=" ")
    while n != 1:
        if n % 2 == 0:
            n //= 2
        else:
            n = n * 3 + 1
        print(n, end=" ")


if __name__ == "__main__":
    n = int(input())
    solve(n)
