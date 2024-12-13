def solve(n, total_sum):
    actual_sum = (n * (n + 1)) // 2
    print(actual_sum - total_sum)


if __name__ == "__main__":
    nums = []
    total_sum = 0
    n = int(input())
    my_list = [int(x) for x in input().split()]
    solve(n, sum(my_list))
