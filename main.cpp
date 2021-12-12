#include<iostream>
#include "problem.h"
#include "equation.h"


int main (){
    UniformTimeDiscretization* time = new UniformTimeDiscretization(20,25,1);
    problem pb (18, 03 ,time);
    pb.solve();
    return 0;
} 