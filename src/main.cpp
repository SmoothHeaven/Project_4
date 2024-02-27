#include "matrix_operation.hpp"
#include <iostream>

int main() {
    Eigen::MatrixXd a(2,2), b(2,2);
    a << 1 , 2,
         3 , 4;

    b << 1 , 2,
         3 , 4;

    MatrixOperations opr1;

    std::cout << opr1.multiply(a, b) << std::endl;

}
