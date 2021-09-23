/**
 * @file      main.cpp
 * @author    vmf0min (vlifom@yandex.ru)
 * @brief     Task 4. Version 1.
 * Написать функцию, которая будет разворачивать число задом наперед. На вход
 * гарантированы неотрицательные целые числа.
 * вход: 25863
 * выход: 36852
 * @version   0.1
 * @date      23-09-2021
 * @copyright Copyright (c) 2021
 */

#include <iostream>
#include <limits>
#include <string>

size_t ReverseNumber(size_t number) {
  size_t reverse_number = 0;
  while (number) {
    reverse_number = reverse_number * 10 + number % 10;
    number /= 10;
  }
  return reverse_number;
}

int main() {
  system("cls");
  size_t number;
  std::cin >> number;
  std::cout << ReverseNumber(number) << std::endl;
}
