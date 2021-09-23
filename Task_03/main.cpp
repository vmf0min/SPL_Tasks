/**
 * @file      main.cpp
 * @author    vmf0min (vlifom@yandex.ru)
 * @brief     Task 3.
 * Сгенерировать первые 30 чисел Фибоначчи. Удалить те из них, которые содержат
 * цифру 1 на любой позиции (1, 12, 21, 144). Числа Фибоначчи, это числа,
 * сформированные по правилу: F(0) = 0, F(1)=1, F(n) = F(n-1) + F(n-2).
 * @version   0.1
 * @date      22-09-2021
 * @copyright Copyright (c) 2021
 */

#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

template <typename T, typename = std::enable_if_t<std::is_integral<T>::value>>
void Fib(std::vector<T>& fib_v) {
  fib_v[0] = 0;
  fib_v[1] = 1;
  for (size_t i = 2; i < fib_v.size(); ++i)
    fib_v[i] = fib_v[i - 1] + fib_v[i - 2];
}

template <typename T, typename = std::enable_if_t<std::is_integral<T>::value>>
auto RemoveNumbersContainsDigitInVector(std::vector<T>& v, uint16_t digit) {
  std::vector<T> v_combed;
  std::copy_if(v.begin(), v.end(), std::back_inserter(v_combed),
               [digit](auto x) {
                 bool is_contains_digit = false;
                 auto tmp = x;
                 while (tmp && !is_contains_digit) {
                   if (tmp % 10 == digit) is_contains_digit = true;
                   tmp /= 10;
                 }
                 return !is_contains_digit;
               });
  return v_combed;
}

template <typename T>
void PrintVector(std::vector<T>& vec) {
  for (auto&& v : vec) std::cout << v << " ";
  std::cout << std::endl;
}

int main() {
  std::vector<size_t> fib_v(30);
  Fib(fib_v);
  PrintVector(fib_v);

  auto fib_v_combed = RemoveNumbersContainsDigitInVector(fib_v, 1);
  PrintVector(fib_v_combed);
}
