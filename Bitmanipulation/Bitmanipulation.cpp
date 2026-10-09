
#include <iostream>
using namespace std;

using ll = long long;

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
        n &= (n - 1);
        count++;
    }
    return count;
}

int main() {
    ll n = 10;
    int k = 2;

    cout << getBit(n, k) << '\n';
    cout << setBit(n, k) << '\n';
    cout << clearBit(n, k) << '\n';
    cout << toggleBit(n, k) << '\n';
    cout << isPowerOfTwo(n) << '\n';
    cout << countSetBits(n) << '\n';

    return 0;
}
