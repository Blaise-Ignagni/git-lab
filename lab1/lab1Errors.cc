/**
 *   @file: lab1Errors.cc
 * @author: Blaise Ignagni
 *   @date: 5/17/22
 *  @brief: lab1
 */

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;


int main() {

    double a, b, c;
    double disc;
    cout << "Enter the values for a, b, and c." << endl;
    cin >> a >> b >> c;
    disc = sqrt(b * b - 4 * a * c);

    double x1, x2;

    x1 = (-b + disc) / (2 * a);
    x2 = (-b - disc) / (2 * a);
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    return 0;
}