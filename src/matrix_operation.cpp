#include "matrix_operation.hpp"


MatrixOperations::MatrixOperations() {

}

Eigen::MatrixXd MatrixOperations::multiply(const Eigen::MatrixXd &mat1, const Eigen::MatrixXd &mat2) {
    return mat1*mat2;
}
