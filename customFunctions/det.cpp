#include <eigen/Eigen/Dense>

#include "det.h"

using namespace Eigen;
using Eigen::MatrixXd;

double det(MatrixXd a) {
    return (a.determinant());
}