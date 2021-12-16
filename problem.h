#pragma once 
#include <iostream>
#include "equation.h"
#include "Variable.h"

 

class problem 
{
    //Donnees 
    private :
    equation m_equation ;
    Variable var ;

    
    ITimeDiscretization* time; // pointeur de class 
    
    // constructeur  , déconstructeur  
    public : 
    problem (double a , double b , ITimeDiscretization* time ) : m_equation(a,b) , time(time) {};
    ~problem(){};


    //methodes  
    public:
    void solve ();
    equation get_m_equation(); // acces à m_equation
    ITimeDiscretization* get_time();// acces à time 
    Variable get_var();

};