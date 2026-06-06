#include <iostream>
#include <sstream>
#include "vectors.h"

std::string str(const vec2& v) {
  std::ostringstream oss;
  oss << "(" << v.x << ", " << v.y << ")";
  return oss.str();
}

std::string str(const vec3& v) {
  std::ostringstream oss;
  oss << "(" << v.x << ", " << v.y << ", " << v.z << ")";
  return oss.str();
}

int main() {
  // Vectors
  vec2 v2(3.0f, 4.0f);
  vec3 v3(3.0f, 4.0f, 5.0f);

  std::cout << "vec2: " << str(v2) << '\n';
  std::cout << "vec3: " << str(v3) << '\n';
  std::cout << '\n';


  // Distance
  vec2 p1(10.0f, 5.0f);
  vec2 p2(3.0f, 2.0f);
  float d = Distance(p1, p2);

  std::cout << "p1: " << str(p1) << '\n';
  std::cout << "p2: " << str(p2) << '\n';
  std::cout << "Distance between p1 and p2: " << d << '\n';
  std::cout << '\n';


  // Cross product
  vec3 i(1.0f, 0.0f, 0.0f);
  vec3 j(0.0f, 1.0f, 0.0f);
  vec3 k(0.0f, 0.0f, 1.0f);

  vec3 ij = Cross(i, j);
  std::cout << "Cross product of i: " << str(i) << " and j: " << str(j) << " should be k: " << str(k) << '\n';
  std::cout << "ij: " << str(ij) << '\n';

  vec3 jk = Cross(j, k);
  std::cout << "Cross product of j: " << str(j) << " and k: " << str(k) << " should be i: " << str(i) << '\n';
  std::cout << "jk: " << str(jk) << '\n';

  vec3 ki = Cross(k, i);
  std::cout << "Cross product of k: " << str(k) << " and i: " << str(i) << " should be j: " << str(j) << '\n';
  std::cout << "ki: " << str(ki) << '\n';
  std::cout << '\n';

  vec3 ji = Cross(j, i);
  std::cout << "Cross product of j: " << str(j) << " and i: " << str(i) << " should be the inverse of k: " << str(k) << '\n';
  std::cout << "ji: " << str(ji) << '\n';
  std::cout << '\n';

  return 0;
}
