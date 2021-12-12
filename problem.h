#pragma once 
#include <iostream>
#include "equation.h"

 
class ITimeDiscretization 
{
    protected :

        int t_init;
        int f_fin;
        int step;
    public : 
        ITimeDiscretization( int start ,int end ,int _step ) : t_init(start) , f_fin(end), step(_step) {};
    int get_t_init();
    int get_f_fin();
    int get_step();
    



};

class UniformTimeDiscretization: public ITimeDiscretization 

{
    private :
    const int step ;
    public :
    UniformTimeDiscretization (int t_init , int f_fin , const int pas ) : ITimeDiscretization( t_init , f_fin , pas ) , step(pas) {};
};
class problem 
{
    //Donnees 
    private :
    equation m_equation ;
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

};