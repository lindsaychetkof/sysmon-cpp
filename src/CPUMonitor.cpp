#include "CPUMonitor.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

float CPUMonitor::getUsage(){

    // Stat
    std::ifstream statFile("/proc/stat"); //Open stat file
    std::string first_line;

    if (std::getline(statFile, first_line)){   //get first line
        
        std::istringstream iss(first_line);
        std::string label;
        iss >> label; //label is 'cpu' -> not needed

        std::vector<long long> values;

        //Pushes times onto vector
        long long val;
        while (iss >> val){
            values.push_back(val);
        }
    
        long total = 0;
        for (int i = 0; i < values.size(); i++)
        {
            total += values[i];
        }
    
        long idle = values[3] + values[4];

        return idle/total;
    }

    return 0.0f;
}