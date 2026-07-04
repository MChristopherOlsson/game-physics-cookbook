#include <iostream>
#include <sstream>
#include "../math/matrices.h"
#include "chapter_2_matrices.h"

namespace chapter_2_matrices {

  void prntm(const float* mat, int rows, int cols) {
    for (int row = 0; row < rows; ++row) {
      for (int col = 0; col < cols; ++col) {
        std::cout << mat[row * cols + col] << " ";
      }
      std::cout << "\n";
    }
  }

  void run() {
    std::cout << "-----TRANSPOSE-----\n";
    mat2 m2 = { 10.0f, 20.0f, 30.0f, 40.0f };
    mat2 transposed = Transpose(m2);

    prntm(m2.asArray, 2, 2);
    std::cout << "\nTransposed\n";
    prntm(transposed.asArray, 2, 2);
  }
}
