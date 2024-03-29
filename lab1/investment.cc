/**
 *   @file: investment.cc
 * @author: Blaise Ignagni
 *   @date: 5/17/22
 *  @brief: lab1
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {

    double inv_amount, interst_rate, num_years, ftr_val;
    double disc;
    cout << "Investment Amount:";
    cin >> inv_amount;
    if (inv_amount < 0){
        cout << "Error: Invalid Input";
        return 1;
    }
    cout << "$" << inv_amount << endl;
    cout << "Interest:";
    cin >> interst_rate;
    if (interst_rate < 0){
        cout << "Error: Invalid Input";
        return 1;
    }
    cout << interst_rate << "%" << endl;
    cout << "Number of years:";
    cin >> num_years;
    if (num_years < 0){
        cout << "Error: Invalid Input";
        return 1;
    }
    cout << num_years << endl;
    
    ftr_val = inv_amount*pow((1+interst_rate),num_years);

    cout << "Future Value: $" << ftr_val << endl;

    return 0;
}