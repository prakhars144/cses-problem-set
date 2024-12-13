def solve(n, seq):
    op = 0
    for i in range(1, len(seq)):
        if seq[i - 1] > seq[i]:
            op += (seq[i-1] - seq[i])
            seq[i] = seq[i - 1]
    print(op)


if __name__ == "__main__":
    n = int(input())
    seq = [int(x) for x in input().split()]
    solve(n, seq)