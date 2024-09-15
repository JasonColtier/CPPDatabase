#if !defined(NTH_PRIME_H)
#define NTH_PRIME_H

#include <map>

namespace nth_prime {

    int nth(int n);

    void fillWithIndex(std::map<int,bool>& primes,int fillUnitilN);

    void markNumberAsPrimes(std::map<int,bool>& primes);

    int numberOfPrimes(std::map<int,bool>& primes);

    int getLastPrime(std::map<int,bool>& primes);

    int getNextIterationStartIndex(std::map<int,bool>& primes,int currentIndex);

}  // namespace nth_prime

#endif // NTH_PRIME_H