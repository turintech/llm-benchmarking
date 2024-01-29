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
for (int i = 0; i < n; i++) {
    sum += (long) (i * i);
}
  return sum;
}

/**
 * @brief Sums all triangle numbers from T(1) to T(n)
 *
 * @param n
 * @return the sum of all triangle numbers from T(1) to T(n)
 */
long
DoubleForLoop::SumTriangle(int n) {
  long sum = 0;
 for (int i = 0; i < n + 1; i += 1) {
  for (int j = 0; j < i; j += 1) {
    sum = sum + (long) j;
  }
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
  int count = 0;
  for (int i = 0; i < (int) v.size(); i += 1) {
    int nDuplicates = 0;
    for (int j = 0; j < (int) v.size(); j += 1) {
      if (v[i] == v[j]) {
        nDuplicates += 1;
      }
    }
    if (nDuplicates == 2) {
      count += 1;
    }
  }
  return count / 2;
}

/**
 * @brief Counts the number of instances where the values at the same index are equal
 *
 * @param v0
 * @param v1
 * @return the number of instances where the values at the same index are equal
 */
int
DoubleForLoop::CountDuplicates(std::vector<int> v0, std::vector<int> v1) {
  int count = 0;
for (int i = 0, end = std::min(v0.size(), v1.size()); i < end; ++i) {
    if (v0[i] == v1[i]) {
        ++count;
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
for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
        sum += matrix[j][i];
    }
}
  return sum;
}