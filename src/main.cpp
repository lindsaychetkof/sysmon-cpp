#include <iostream>
#include "SystemInfo.hpp"
#include <CPUMonitor.hpp>

int main() {
    std::cout << "====================\n";
    std::cout << "   SysMon CLI Tool   \n";
    std::cout << "====================\n\n";

    SystemInfo sys;
    sys.printSystemInfo();

    CPUMonitor cpu;
    float usage = cpu.getUsage();
    
    std::cout << usage << '\n';

    return 0;
}
