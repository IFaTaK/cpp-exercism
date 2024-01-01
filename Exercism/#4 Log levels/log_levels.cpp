//
// Created by Kilian LEFEVRE on 01/01/2024.
//
#include <string>

namespace log_line {
    std::string message(std::string line) {
        int idx = line.find(":") + 2;
        return line.substr(idx);
    }
    std::string log_level(std::string line) {
        int idx_start = line.find("[") + 1;
        int idx_end = line.find("]");
        return line.substr(idx_start,idx_end - idx_start);
    }
    std::string reformat(std::string line) {
        std::string level   = log_level(line);
        std::string log_message = message(line);
        return log_message + " (" + level + ")";
    }
} // namespace log_line
