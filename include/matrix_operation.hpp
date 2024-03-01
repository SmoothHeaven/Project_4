#pragma once
//cpp

//3rd party
#include <eigen3/Eigen/Core>

//local libs

class MatrixOperations
{
public:

    MatrixOperations();
    
    Eigen::MatrixXd multiply(const Eigen::MatrixXd &mat1, const Eigen::MatrixXd &mat2);

private:

};



