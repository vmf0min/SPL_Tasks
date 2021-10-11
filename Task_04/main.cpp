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
#include <charconv>
#include <iostream>
#include <string>

bool ReverseNumber(size_t& number) {
  std::string num_str = std::to_string(number);
  std::reverse(num_str.begin(), num_str.end());

  size_t tmp = number;
  auto [ptr, ec] =
      std::from_chars(num_str.data(), num_str.data() + num_str.size(), tmp);
  if (ec == std::errc::result_out_of_range) return false;

  std::swap(number, tmp);
  return true;
}

int main() {
  system("cls");
  size_t number;
  std::cin >> number;

  if (ReverseNumber(number))
    std::cout << number;
  else
    std::cerr << "result_out_of_range";
  std::cout << std::endl;
}
