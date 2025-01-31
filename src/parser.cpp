#include "../include/parser.h"

std::vector<LogEntry> LogParser::parseLogs(const std::string& logFilePath) {
    std::vector<LogEntry> logs;
    std::ifstream file(logFilePath);
    std::string line;
    std::regex logPattern(R"((\d{4}-\d{2}-\d{2} \d{2}:\d{2}:\d{2}) \[(\w+)\] (.+))");
    std::smatch matches;

    while (std::getline(file, line)) {
        if (std::regex_match(line, matches, logPattern)) {
            logs.push_back({matches[1], matches[2], matches[3]});
        }
    }
    return logs;
}