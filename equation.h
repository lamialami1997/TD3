#pragma once 
#include <iostream>


class equation{
    private : 
    double a , b ;
    public : 
    // constructeur , dteur 
    equation (double x, double y ): a(x),b(y) {};
    ~equation(){};
    double get_a();
    double get_b();
    void compute(int i);

        
    
};