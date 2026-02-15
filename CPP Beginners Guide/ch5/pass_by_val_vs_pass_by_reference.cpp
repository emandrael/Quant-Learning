#include <iostream>
#include <string>
#include <string_view>

void swap(std::string &x, std::string &y);

int main() {
  std::string x = "Kool-:w";
  std::string y = "Water";

  swap(x, y);

  std::cout << "x: " << x << "\n";
  std::cout << "y: " << y << "\n";
}

// When we pass in stuff in normally, we are passing in copies. Not the actual
// location.

void swap(std::string &x, std::string &y) {
  std::string temp;
  temp = x;
  x = y;
  y = temp;
}
