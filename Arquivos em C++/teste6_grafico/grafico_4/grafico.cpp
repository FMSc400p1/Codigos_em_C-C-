#include <iostream>
#include <string>

int main(){

  std::string horas_trab[]={
    "14h-15h",
    "15h-16h",
    "16h-17h",
    "17h-18h",
    "18h-19h",
    "19h-20h",
    "20h-21h",
    "21h-22h"
  };
  int size_arr = sizeof(horas_trab);
  int size_arr2 = sizeof(horas_trab[0]);
  std::cout << "\nSize arr e: "<<size_arr << std::endl;
  std::cout << "\nSize arr2 e: "<<size_arr2 << std::endl;

  // int size_arr = sizeof(horas_trab) / sizeof(horas_trab[0]);
  // std::cout << "\nQuantos item tem no array do tipo string: "<<size_arr;


  return 0;
}