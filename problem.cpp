#include <iostream>
#include "problem.h"


//constructeur problem 

   
    void problem::solve()
    {
        
        m_equation.compute_initial_condition(time->get_t_init(),var);
        for (double i=time->get_t_init() ; i<= time->get_f_fin() ; i+=time->get_step())
        {
            m_equation.compute(i,time->get_step()), var,*time);
             
        }
        

    }
    // accesseurs 

    equation problem::get_m_equation()
    {
        return m_equation;
    }
    ITimeDiscretization* problem::get_time()
    {
        return time;
    }
    Variable problem::get_var()
    {
        return var ; 
    }


    

