# SysMon CLI Tool

A simple, modular system monitoring tool written in C++ that provides CPU, memory, disk, network, and system information from the command line.

## Features
- Print system uptime, hostname, and kernel version
- Modular structure for adding more monitoring capabilities
- Uses Linux's `/proc` filesystem for information

## Build
```bash
mkdir build && cd build
cmake ..
make
./sysmon
