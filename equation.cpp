#include "equation.h"

double equation::get_a()
{
    return a;
}
double equation::get_b()
{
    return b;

}
double compute(double t, double step, Variable &var ,ITimeDiscretization temp)
{
    return var[time.iterateur(t)+1]=var[time.iterateur(t)]+step;
} 
double compute_initial_condition(double t0, Variable &var)
{
    var[0] = t0;
    return var[0];
}