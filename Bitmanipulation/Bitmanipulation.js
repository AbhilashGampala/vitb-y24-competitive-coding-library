
function getBit(n, k) {
    return (n >> BigInt(k)) & 1n;
}

function setBit(n, k) {
    return n | (1n << BigInt(k));
}

function clearBit(n, k) {
    return n & ~(1n << BigInt(k));
}

function toggleBit(n, k) {
    return n ^ (1n << BigInt(k));
}

function isPowerOfTwo(n) {
    return n > 0n && (n & (n - 1n)) === 0n;
}

function countSetBits(n) {
    let count = 0;
    while (n > 0n) {
        n = n & (n - 1n);
        count++;
    }
    return count;
}

const n = 10n;
const k = 2;

console.log(getBit(n, k).toString());
console.log(setBit(n, k).toString());
console.log(clearBit(n, k).toString());
console.log(toggleBit(n, k).toString());
console.log(isPowerOfTwo(n));
console.log(countSetBits(n));
