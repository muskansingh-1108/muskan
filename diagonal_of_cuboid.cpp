#include <iostream>
#include <cmath>
using namespace std;

double calculateDiagonal(double length, double width, double height) {
    return sqrt(length * length + width * width + height * height);
}

int main() {
    double length, width, height;
    cout << "Enter the length of the cuboid: ";
    cin >> length;
    cout << "Enter the width of the cuboid: ";
    cin >> width;
    cout << "Enter the height of the cuboid: ";
    cin >> height;

    double diagonal = calculateDiagonal(length, width, height);
    cout << "The length of the diagonal of the cuboid is: " << diagonal << endl;

    return 0;
}
