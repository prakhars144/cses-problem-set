def solve(seq):
    maxSeq = 1
    currentSeq = 1
    for i in range(1, len(seq)):
        if seq[i] == seq[i - 1]:
            currentSeq += 1
        else:
            maxSeq = max(maxSeq, currentSeq)
            currentSeq = 1
    maxSeq = max(maxSeq, currentSeq)
    print(maxSeq)


if __name__ == "__main__":
    seq = input()
    solve(seq)
