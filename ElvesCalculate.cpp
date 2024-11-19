#include "ElvesCalculate.h"
#include <iostream>
#include <fstream>
using namespace std;

#include <string>

int main() {
    std::fstream file;
    ElvesCalculate calculate;
    file.open("params-2.txt", std::ios::in);
    if(file.is_open()) {
        string tp;
        while (getline(file, tp)) {
            std::cout << tp << std::endl;
        }
        file.close();
    }

    return 0;
}