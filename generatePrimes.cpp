#include "generatePrimes.h"
#include "iostream"

void GeneratePrimes::generateAllPrimes(int limit) {
	std::cout << "Searching for all primes from 1 to " << limit << std::endl;
	for (int i = 1; i <= limit; i++) {
		if (checkIfPrime(i)) {
			std::cout << i << " is a prime." << std::endl;
		}
	}
}

bool GeneratePrimes::checkIfPrime(int number) {
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}