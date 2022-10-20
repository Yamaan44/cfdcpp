#include <iostream>
#include <vector>
#include <string>
#include <eigen/Eigen/Dense>
#include "customFunctions/customFunctions.h"

using namespace std;
using namespace Eigen;
using Eigen::MatrixXd;

int main() {
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    MatrixXd m(2,2);
    m(0,0) = 20;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);

    Matrix4d f;
    double z = det(m);

    std::cout << m << std::endl;

    std::cout << f.size() << std::endl;

    std::cout << z << std::endl;

}