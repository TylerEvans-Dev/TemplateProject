//Tyler Evans
//Quick project 11/7/2020 22:00 - 12/7/2020 22:00
// D/M/Y
//This project is an example of a class template
// It is a small project that I hope to add
//Credit to Simple snippets for providing an example.
//Credit to Geeks for Geeks for helping with template examples
//Credit to Stack exchange for providing examples in Ostream Overloading operators.
//Thank you so much!!
#include "TemplateExsample2020.h"
#include <string>
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main(){
    //here is the template being used
    Point<int, double, float> first(5, 10, 15);
    cout << first;
    //an example of diffrent data types
    //chars and strings
    Point<int, char, string> sec(33, 't', "watermelon");
    cout << sec;
    cout <<"Press enter to exit" << endl;
    cin.get();
    return 0;
}
