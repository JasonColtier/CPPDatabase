#include "nth_prime.h"
#include <stdexcept>
#include <vector>
#include <iostream>

namespace nth_prime {

    int currentFactor = 2;
    int lastNumberMarkedAsPrime = 2;
    int numberOfPrimesFound = 1;
    int currentLoopCount = 1;
    std::vector<int> primesFound;

    int nth(int n) {
        if (n <= 0)
            throw std::domain_error("");

        if (n == 1)
            return 2;


//
        std::map<int, bool> primes;
        int lastIndex = n;

        while (numberOfPrimes(primes) < n) {
            fillWithIndex(primes, lastIndex);
            nth_prime::markNumberAsPrimes(primes);
            lastIndex++;
            currentLoopCount++;
        }


        return getLastPrime(primes);
    }

    void fillWithIndex(std::map<int, bool> &primes, int fillUnitilN) {
        std::cout << "filling map until int " << fillUnitilN << std::endl;

        int fistIndex = std::max(2, static_cast<int>(primes.size()));

        for (int i = fistIndex; i <= fillUnitilN; i++) {
            primes.emplace(i, true);
        }

        std::cout << "map size : " << primes.size() << std::endl;
    }

    void markNumberAsPrimes(std::map<int, bool> &primes) {

        int startIndex = 2;

        for (int i = startIndex; i < static_cast<int>(primes.size()) + 2; i = getNextIterationStartIndex(primes, i)) {
            std::cout << "is " << i << " prime ?" << std::endl;

            for (auto &prime: primes) {
                if (!prime.second) {
                    continue;
                }

                if (prime.first % i == 0 && prime.first != i) {
                    prime.second = false;
                    std::cout << "marking number " << prime.first << " as NOT prime" << prime.first << "%" << i << "==0"
                              << std::endl;
                    continue;
                }
            }
        }
        currentFactor++;
    }

    int numberOfPrimes(std::map<int, bool> &primes) {

        for (auto i = primes.rbegin(); i != primes.rend(); i++) {
            if (i->first > lastNumberMarkedAsPrime) {
                if (i->second) {
                    std::cout << "number " << i->first << " is prime" << std::endl;
                    numberOfPrimesFound++;
                    lastNumberMarkedAsPrime = std::max(lastNumberMarkedAsPrime, i->first);
                    primesFound.push_back(i->first);
                }
            }
        }

        std::cout << "number of primes found : " << numberOfPrimesFound << std::endl;
        std::cout << "last prime number : " << lastNumberMarkedAsPrime << std::endl;

        return numberOfPrimesFound;
    }

    int getLastPrime(std::map<int, bool> &primes) {

        for (auto i = primes.rbegin(); i != primes.rend(); i++) {
            if (i->second) {
                std::cout << "testing number " << i->first;
                return i->first;
            }
        }

        return 0;
    }

    int getNextIterationStartIndex(std::map<int, bool> &primes, int currentIndex) {
        if (static_cast<int>(primesFound.size()) >= currentIndex) {

            if (static_cast<int>(primes.size()) > primesFound[currentIndex] * primesFound[currentIndex]) {
                std::cout << "next iteration start index starting from prime " << primesFound[currentIndex] << ": "
                          << primesFound[currentIndex] * primesFound[currentIndex] << std::endl;
                return primesFound[currentIndex] * primesFound[currentIndex];
            } else {
                std::cout << "next iteration start index : " << currentIndex << "+1" << std::endl;
                return currentIndex + 1;
            }
        } else {
            std::cout << "next iteration start index : " << currentIndex << "+1" <<
                      std::endl;
            return currentIndex + 1;
        }
    }
}  // namespace nth_prime
