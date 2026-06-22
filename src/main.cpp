#include <stdexcept>
#include <iostream>
#include <fstream>

#include "input_file_check.h"
#include "math_tools.h"
#include "formulae.h"


int main() {

    // take files from list and turn them into numbers
    std::vector<Input> inputs;
    for (int i = 0; i < 9; i++)
    {
        inputs.push_back(Input((Input::InputType)i));
        inputs[i].value = numbercheck(inputs[i].filepath);

        std::cout << inputs[i].name << ": " << inputs[i].value << "\n";
    }
    /*
        this part just checks if thy files exist
        if you get a number in the one digit you effed up
        if you get a number in the tens digit just rerun it.
    */
    int checkfile = filecheck(inputs);
    std::cout << "filecheck returned code " << checkfile << ": ";
    int errorCode = handleFileErrors(checkfile);
    if (errorCode != 0) { return errorCode; }    

    MathTools::setStdOutPrecision(8);

    // now we do the meth
    long double integralTest = MathTools::integrate<double(*)(double)>(sin, 0.0, 3.14, 10000, true);
    std::cout << "integral of sin(x) from 0 to 3.14 equals " << integralTest; 

    return 0;
}
