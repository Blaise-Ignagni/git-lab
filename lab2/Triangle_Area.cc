/**
 *   @file: lab1Errors.cc
 * @author: Blaise Ignagni
 *   @date: 5/24/22
 *  @brief: lab2
 */

#include <iostream>
#include <iomanip> 
#include <math.h>
using namespace std;


int main() {

    cout << "Enter values of three sides (-1 to quit)" << endl;
    double a,b,c,Greatest,least1,least2;
    do{
        cin >> a >> b >> c;
        //cout << a << b << c;
        if((a>=b)&&(a>=c)){
            Greatest = a;
            least1 = b;
            least2 = c;
        }
        if((b>=a)&&(b>=c)){
            Greatest = b;
            least1 = a;
            least2 = c;
        }
        if((c>=b)&&(c>=a)){
            Greatest = c;
            least1 = b;
            least2 = a;
        }
        if(Greatest > (least1+least2)){
            cout << "(Invalid)";
        }
        else{
            double s = ((a+b+c)/2);
            double area = sqrt(s*(s-a)*(s-b)*(s-c));
            cout << fixed << setprecision(2) <<  "    (Valid, "  << area << endl;
        }
    }
    while((a != -1)&&(b != -1)&&(c != -1));

    return 0;
}