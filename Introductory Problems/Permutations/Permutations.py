def solve(n):
    if n == 2 or n == 3:
        print("NO SOLUTION")
        return
    evens = [i for i in range(1, n + 1, 2)]
    odds = [i for i in range(2, n + 1, 2)]
    series = odds + evens
    print(*series)

if __name__ == "__main__":
    n = int(input())
    solve(n)