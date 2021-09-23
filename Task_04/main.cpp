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

#include <algorithm>
#include <iostream>
#include <string>

size_t ReverseNumber(size_t number) {
  std::string number_str = std::to_string(number);
  std::reverse(number_str.begin(), number_str.end());
  return std::stoull(number_str);
}

int main() {
  system("cls");
  size_t number;
  std::cin >> number;
  std::cout << ReverseNumber(number) << std::endl;
}
