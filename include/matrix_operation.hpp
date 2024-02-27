#pragma once

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>

class MatrixOperations
{
private:

public:
    MatrixOperations(/* args */);
    Eigen::MatrixXd multiply(const Eigen::MatrixXd &mat1, const Eigen::MatrixXd &mat2);
};



