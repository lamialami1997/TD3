#pragma once 
#include "variable.h"
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
    double compute(double t, double step, Variable var);
    double compute_initial_condition(double t, Variable var);

        
    
};