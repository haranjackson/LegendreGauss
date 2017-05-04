#ifndef LEGENDRE_H
#define LEGENDRE_H


#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Eigen>
#include <eigen3/Eigen/Eigenvalues>

typedef Eigen::MatrixXd Mat;
typedef Eigen::VectorXd Vec;
typedef Eigen::ArrayXd Arr;

Arr legval(Vec x, Vec c);
Mat legcompanion(Vec c);
Vec legder(Vec c);
Mat leggauss(int deg);


#endif // LEGENDRE_H

