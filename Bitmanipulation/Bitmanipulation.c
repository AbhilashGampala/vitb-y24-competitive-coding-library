
#include <stdio.h>
#include <stdbool.h>

typedef long long ll;

ll getBit(ll n, int k) {
    return (n >> k) & 1LL;
}

ll setBit(ll n, int k) {
    return n | (1LL << k);
}

ll clearBit(ll n, int k) {
    return n & ~(1LL << k);
}

ll toggleBit(ll n, int k) {
    return n ^ (1LL << k);
}

bool isPowerOfTwo(ll n) {
    return n > 0 && (n & (n - 1)) == 0;
}

ll countSetBits(ll n) {
    ll count = 0;
    while (n > 0) {
        n = n & (n - 1);
        count++;
    }
    return count;
}
