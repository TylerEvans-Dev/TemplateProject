#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <random>
using namespace std;
template <class A, class B, class C>
class Point{
private:
    //each of the data members that are the type
    A x;
    B y;
    C z;
    //extra data stuff
    double null = 0;
public:
    //here is a def for the class
    Point(A a, B b, C c){
        x = a;
        y = b;
        z = c;
    }
    //set functions.
    void setX(A a){
        x = a;
    }
    void setY(B a){
        y =a;
    }
    void setZ(C a){
        z = a;
    }
    //get functions
    A getX() const{
        return x;
    }
    B getY() const{
        return y;
    }
    C getZ() const{
        return z;
    }
    double getNULL() const{
        return null;
    }
    friend ostream& operator << (ostream& a, Point& b){
        a << "Here is X Y Z in the template" << endl;
        a << b.getX() <<"\t"<< b.getY() << "\t"<< b.getZ() << endl;
        //a << getNULL() << endl;
        return a;
    }
};
