#include <iostream>
#include <cassert>
#include "alg.h"

void testCheckPrime() {
    assert(checkPrime(2) == true);
    assert(checkPrime(3) == true);
    assert(checkPrime(4) == false);
    assert(checkPrime(17) == true);
    assert(checkPrime(1) == false);
    assert(checkPrime(0) == false);
    std::cout << "checkPrime tests passed!\n";
}

void testNPrime() {
    assert(nPrime(1) == 2);
    assert(nPrime(2) == 3);
    assert(nPrime(3) == 5);
    assert(nPrime(4) == 7);
    assert(nPrime(5) == 11);
    std::cout << "nPrime tests passed!\n";
}

void testNextPrime() {
    assert(nextPrime(4) == 5);
    assert(nextPrime(5) == 7);
    assert(nextPrime(11) == 13);
    assert(nextPrime(13) == 17);
    std::cout << "nextPrime tests passed!\n";
}

void testSumPrime() {
    assert(sumPrime(10) == 17); // 2+3+5+7 = 17
    assert(sumPrime(2) == 0);
    assert(sumPrime(5) == 5); // 2+3 = 5
    std::cout << "sumPrime tests passed!\n";
}

void testTwinPrimes() {
    assert(twinPrimes(2, 10) == 2); // (3,5) va (5,7)
    assert(twinPrimes(2, 100) == 8);
    assert(twinPrimes(10, 20) == 1); // (17,19)
    std::cout << "twinPrimes tests passed!\n";
}

int main() {
    testCheckPrime();
    testNPrime();
    testNextPrime();
    testSumPrime();
    testTwinPrimes();
    std::cout << "\nAll tests passed successfully!\n";
    return 0;
}
