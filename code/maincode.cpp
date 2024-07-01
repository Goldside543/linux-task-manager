#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string line;
    std::ifstream procStat("/proc/stat");
    if (procStat.is_open()) {
        while (getline(procStat, line)) {
            std::cout << line << '\n';
        }
        procStat.close();
    } else {
        std::cout << "Unable to open file";
    }
    return 0;
}
