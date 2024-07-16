#include <algorithm>
#include <unordered_map>
#include "double.h"

/**
 * @brief Sums all values squared from 0 to n
 *
 * @param n
 * @return the sum of all values squared from 0 to n
 */ 
long
DoubleForLoop::SumSquare(int n) {
  long sum = 0;
  for (int i = 0; i < n; i += 1) {
    sum += (long) (i * i);
  }
  return sum;
}

long DoubleForLoop::SumTriangle(int n) {
  long sum = 0;
  for (int i = 0; i <= n; i++) {
    sum += (i * (i - 1)) / 2;
  }
  return sum;
}

/**
 * @brief Counts the number of pairs in an vay
 *
 * Pairs are defined as exactly two instances of the same value in
 * the vay.
 *
 * @param v
 * @return the number of pairs in an vay
 */ 
int
DoubleForLoop::CountPairs(std::vector<int> v) {
  std::unordered_map<int, int> counts;
  for (int i = 0; i < (int) v.size(); i += 1) {
    counts[v[i]]++;
  }
  int nPairs = 0;
  for (auto it = counts.begin(); it != counts.end(); ++it) {
    if (it->second == 2) {
      nPairs++;
    }
  }
  return nPairs;
}

int DoubleForLoop::CountDuplicates(std::vector<int> v0, std::vector<int> v1) {
  int count = 0;
  int size = std::min(v0.size(), v1.size());
  for (int i = 0; i < size; i += 1) {
    if (v0[i] == v1[i]) {
      count += 1;
    }
  }
  return count;
}

/**
 * @brief Sums all values in a 2D vay
 *
 * @param matrix
 * @return the sum of all values in a 2D vay
 */
int
DoubleForLoop::SumMatrix(std::vector<std::vector<int>> matrix) {
  int n = (int) matrix.size();
  int sum = 0;
  for (int i = 0; i < n; i += 1) {
    for (int j = 0; j < n; j += 1) {
      sum += matrix[j][i];
    }
  }
  return sum;
}