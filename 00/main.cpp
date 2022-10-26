#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>
using namespace std;
using namespace Eigen;
int main() {
    Vector3f p(2.0, 1.0, 1.0);
    Matrix3f t1, r1;
    float sita = 45.0 / 180.0 * acos(-1);//旋转度数为正默认逆时针
    r1 << cos(sita), -sin(sita), 0, sin(sita), cos(sita), 0, 0, 0, 1.0;
    t1 << 1.0, 0, 1.0, 0, 1.0, 2.0, 0, 0, 1.0;
    cout << t1 * r1 * p << endl;
    return 0;
}