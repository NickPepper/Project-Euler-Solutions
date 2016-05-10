#!/bin/bash

# Large non-Mersenne prime
# Problem 97
# The first known prime found to exceed one million digits was discovered in 1999, and is a Mersenne prime of the form 26972593−1; it contains exactly 2,098,960 digits. Subsequently other Mersenne primes, of the form 2p−1, have been found which contain more digits.
#
# However, in 2004 there was found a massive non-Mersenne prime which contains 2,357,207 digits: 28433 * 2 ^ 7830457 + 1
#
# Find the last ten digits of this prime number.

echo ""
echo "We are stupid and love the brute force..."
echo ""
res=$(bc <<< '28433 * (2 ^ 7830457)')
echo $res
echo ""
echo "now copy-paste the last ten digits and add 1 :)"
echo ""
