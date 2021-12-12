#include "equation.h"

double equation::get_a()
{
    return a;
}
double equation::get_b()
{
    return b;

}
double compute(double t, double step, Variable var)
{
    var[t+1] = var[t] + step * t;
    return var[t+1];
} 
double compute_initial_condition(double t0, Variable &var)
{
    var[0] = var.get_a()*t0;
    return var[0];
}