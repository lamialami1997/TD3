#include<Variable.h>

Variable::Variable(){};

Variable::Variable(unsigned n)
{
    y.resize(n+1);
}
double& Variable::operator()(unsigned n)
{
    return y_n[n];
}
std::vector<double> Variable::get_y()
{
    return this->y_n;
}