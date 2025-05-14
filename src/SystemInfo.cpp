#include "SystemInfo.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

void SystemInfo::printSystemInfo() {
    std::cout << "System Info:\n";

    // Uptime
    std::ifstream uptimeFile("/proc/uptime");
    double uptimeSeconds;
    if (uptimeFile >> uptimeSeconds) {
        int hours = uptimeSeconds / 3600;
        int minutes = ((int)uptimeSeconds % 3600) / 60;
        std::cout << " - Uptime: " << hours << "h " << minutes << "m\n";
    }
    uptimeFile.close();

    // Hostname
    char hostname[1024];
    gethostname(hostname, 1024);
    std::cout << " - Hostname: " << hostname << "\n";

    // Kernel version
    std::ifstream versionFile("/proc/version");
    std::string version;
    if (std::getline(versionFile, version)) {
        std::cout << " - Kernel: " << version << "\n";
    }
    versionFile.close();
}
