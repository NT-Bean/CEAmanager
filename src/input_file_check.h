#ifndef INPUT_FILE_CHECK_H
#define INPUT_FILE_CHECK_H

#include <iostream>
#include <fstream>
#include <vector>

#include "input.h"

extern std::vector<std::string> ListofFilePaths;

int filecheck(std::vector<Input> inputs);
double numbercheck(std::string c);
int handleFileErrors(int errorCode);

#endif