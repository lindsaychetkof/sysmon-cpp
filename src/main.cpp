#include <iostream>
#include "SystemInfo.hpp"

int main() {
    std::cout << "====================\n";
    std::cout << "   SysMon CLI Tool   \n";
    std::cout << "====================\n\n";

    SystemInfo sys;
    sys.printSystemInfo();

    return 0;
}
