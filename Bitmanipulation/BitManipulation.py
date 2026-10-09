
def getBit(n, k):
    return (n >> k) & 1


def setBit(n, k):
    return n | (1 << k)


def clearBit(n, k):
    return n & ~(1 << k)


def toggleBit(n, k):
    return n ^ (1 << k)


def isPowerOfTwo(n):
    return n > 0 and (n & (n - 1)) == 0


def countSetBits(n):
    count = 0
    while n > 0:
        n = n & (n - 1)
        count += 1
    return count


n = 10
k = 2

print(getBit(n, k))
print(setBit(n, k))
print(clearBit(n, k))
print(toggleBit(n, k))
print(isPowerOfTwo(n))
print(countSetBits(n))
