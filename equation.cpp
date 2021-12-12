
#include "equation.h"

double equation::get_a()
{
    return a;
}
double equation::get_b()
{
    return b;

}
void equation::compute(int i)
{
    std::cout << "--- compute equation at time : "<< i << "---" << std::endl;
}