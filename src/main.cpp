#ifndef SRC_MAIN_CPP_
#define SRC_MAIN_CPP_

#include <iostream>
#include <cctype>
#include <string>
#include <regex>

#include "main.h"

char Look;

void GetChar() {
  std::cin >> Look;
}

void Error(std::string s) {
  std::cerr << "Error :" << s << ".\n";
}

void Abort(std::string s) {
  Error(s);
  exit(1);
}

void Expected(std::string s) {
  Abort(s + " Expected");
}

void Match(char x) {
  if (x == Look) GetChar();
  else Expected("'" + std::string(x, x) + "'");
}

bool IsAlpha(char c) {
  return std::regex_match(std::string(1, c), std::regex("[a-zA-Z]"));
}

bool IsDigit(char c) {
  return std::regex_match(std::string(1, c), std::regex("[0-9]"));
}

char GetName() {
  if (!IsAlpha(Look)) Expected("Name");
  char result = Look;
  GetChar();
  return result;
}

char GetNum() {
  if (!IsDigit(Look)) Expected("Integer");
  char result = Look;
  GetChar();
  return result;
}

void Emit(const std::string& s) {
  std::cout << TAB << s;
}

void EmitLn(const std::string& s) {
  Emit(s);
  std::cout << '\n';
}

void Init() {
  GetChar();
}

int main() {
  Init();
  return 0;
}

#endif  // SRC_MAIN_CPP_
