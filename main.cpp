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


  vec2 p1(10.0f, 5.0f);
  vec2 p2(3.0f, 2.0f);
  float d = Distance(p1, p2);

  std::cout << "p1" << '\n';
  std::cout << "x: " << p1.x << '\n';
  std::cout << "y: " << p1.y << '\n';
  std::cout << "p2" << '\n';
  std::cout << "x: " << p2.x << '\n';
  std::cout << "y: " << p2.y << '\n';
  std::cout << "Distance between p1 and p2: " << d <<'\n';

  return 0;
}
