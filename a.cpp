#include <bits/stdc++.h>

using namespace std;

#define MAX 100001

// Stores smallest prime factor for every number.
int spf[MAX];

// Function to calculate smallest prime factor of every number.
void calculateSPF() {
  for (int i = 1; i < MAX; i++) {
    spf[i] = i;
  }

  for (int p = 2; p * p < MAX; p++) {
    if (spf[p] == p) {
      for (int i = p * p; i < MAX; i += p) {
        if (spf[i] == i) {
          spf[i] = p;
        }
      }
    }
  }
}

// Function to find the almost prime factors of a number.
set<int> findAlmostPrimeFactors(int n) {
  set<int> primeFactors;
  while (n != 1) {
    int primeFactor = spf[n];
    if (!primeFactors.count(primeFactor)) {
      primeFactors.insert(primeFactor);
    }

    n /= primeFactor;
  }

  return primeFactors;
}

// Function to find the longest subarray with exactly K almost prime factors and no perfect prime factor.
int findLongestSubarray(int arr[], int n, int k) {
  // Calculate the smallest prime factor of every number.
  calculateSPF();

  // Find the almost prime factors of all the numbers in the array.
  set<int> almostPrimeFactors;
  for (int i = 0; i < n; i++) {
    set<int> currentAlmostPrimeFactors = findAlmostPrimeFactors(arr[i]);
    almostPrimeFactors.insert(currentAlmostPrimeFactors.begin(), currentAlmostPrimeFactors.end());
  }

  // If the number of almost prime factors is less than K, then there is no such subarray.
  if (almostPrimeFactors.size() < k) {
    return 0;
  }

  // Initialize the maximum length of the subarray and the start and end indices of the subarray.
  int maxLength = 0;
  int start = 0;
  int end = 0;

  // Count the number of almost prime factors in the current subarray.
  int count = 0;

  while (end < n) {
    // If the current element has an almost prime factor, then increment the count.
    if (almostPrimeFactors.count(arr[end])) {
      count++;
    }

    // If the number of almost prime factors in the current subarray is equal to K, then update the maximum length of the subarray and the start and end indices of the subarray.
    if (count == k) {
      maxLength = max(maxLength, end - start + 1);

      // While the number of almost prime factors in the current subarray is equal to K, remove the first element of the subarray and decrement the count.
      while (count == k) {
        if (almostPrimeFactors.count(arr[start])) {
          count--;
        }

        start++;
      }
    }

    end++;
  }

  return maxLength;
}

// Driver code
int main() {
  int arr[] = {5, 3, 3, 5, 12, 15, 21};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = 3;

  int maxLength = findLongestSubarray(arr, n, k);

  cout << "The longest subarray with exactly K almost prime factors and no perfect prime factor is of length " << maxLength << endl;

  return 0;
}
