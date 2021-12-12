
#include <iostream>
#include "problem.h"


//constructeur problem 

   
    void problem::solve()
    {
        std::cout << "--- Solve problem ---\n" << std::endl;
        for (int i=time->get_t_init() ; i< time->get_f_fin() ; i+=time->get_step())
        {
            m_equation.compute(i);
             
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
    int ITimeDiscretization::get_t_init()
    {
        return t_init;
    }
    int ITimeDiscretization::get_f_fin()
    {
        return f_fin;
    }
    int ITimeDiscretization::get_step()
    {
        return step;
    }

    

