/**
 * @file      main.cpp
 * @author    vmf0min (vlifom@yandex.ru)
 * @brief     Task 1.
 * Почему -1 >> 1 != 1 >> 1
 * @version   0.1
 * @date      22-09-2021
 * @copyright Copyright (c) 2021
 */

#include <iostream>

int main() {
  // Тут будет также -1, потому что для отрицательных чисел в старшем разряде
  // всегда 1
  int32_t x = -1;
  std::cout << (x >> 1) << std::endl;

  // Тут будет 0, потому что число 1 -- это 0000'0001.
  // Собственно, смещение на 1 разряд даст 0.
  // В целом это деление на степень 2-ки. 1 / 2 = 0 (Целочисленное деление)
  int32_t y = 1;
  std::cout << (y >> 1) << std::endl;
}
