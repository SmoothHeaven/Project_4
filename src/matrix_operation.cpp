#include "matrix_operation.hpp"


MatrixOperations::MatrixOperations(/* args */) {

}

Eigen::MatrixXd MatrixOperations::multiply(const Eigen::MatrixXd &mat1, const Eigen::MatrixXd &mat2) {
    Eigen::MatrixXd mul = mat1*mat2;
    return mul;
}