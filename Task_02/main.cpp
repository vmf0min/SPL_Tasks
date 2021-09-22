/**
 * @file      main.cpp
 * @author    vmf0min (vlifom@yandex.ru)
 * @brief     Task 2.
 * Написать функцию для проверки, является ли палиндромом входная строка.
 * вход: "aa bb"
 * выход: false
 *
 * вход: "aa b aa"
 * выход: true
 * @version   0.1
 * @date      22-09-2021
 * @copyright Copyright (c) 2021
 */

#include <iostream>
#include <string>
#include <string_view>

bool PalindromStrCheck(std::string_view str) {
  if (str.empty()) return false;
  for (size_t i = 0; i < (str.size() >> 1); ++i)
    if (str[i] != str[str.size() - i - 1]) return false;
  return true;
}

int main() {
  std::string str;
  std::getline(std::cin, str);

  std::cout << std::boolalpha << PalindromStrCheck(str);
}
