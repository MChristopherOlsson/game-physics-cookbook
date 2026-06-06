#include <iostream>
#include "vectors.h"

int main() {
  vec2 v2(3.0f, 4.0f);
  vec3 v3(3.0f, 4.0f, 5.0f);

  std::cout << "vec2" << '\n';
  std::cout << "x: " << v2.x << '\n';
  std::cout << "y: " << v2.y << '\n';

  std::cout << "vec3" << '\n';
  std::cout << "x: " << v3.x << '\n';
  std::cout << "y: " << v3.y << '\n';
  std::cout << "z: " << v3.z << '\n';

  return 0;
}
