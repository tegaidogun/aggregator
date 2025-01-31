#ifndef PARSER_H
#define PARSER_H

#include <string>
#include <vector>
#include <regex>
#include <fstream>
#include <iostream>

struct LogEntry {
    std::string timestamp;
    std::string level;
    std::string message;
};

class LogParser {
public:
    std::vector<LogEntry> parseLogs(const std::string& logFilePath);
};

#endif