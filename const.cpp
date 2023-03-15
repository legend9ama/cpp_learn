#include <iostream>

using namespace std;

int main() {

    const double PI = 3.1415;
    const int LIGHT_SPEED = 299792458;

    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    double radius = 10;
    double circumference = 2*PI*radius;

    cout<<circumference<<"cm"<<endl;
    cout<<WIDTH<<"x"<<HEIGHT;
    return 0;
}