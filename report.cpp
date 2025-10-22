#include <iostream>
#include <sstream>

class Report {
public:
    std::string title;
    std::string data;

    Report(const std::string& t, const std::string& d) : title(t), data(d) {}
};

class ReportProcessor {
public:
    int processData(const std::string& data) {
        std::istringstream iss(data);
        int number, sum = 0;
        while (iss >> number) {
            sum += number;
        }
        return sum;
    }
};

class ReportFormatter {
public:
    std::string format(const Report& report, int result) {
        return "<h1>" + report.title + "</h1>\n<p>" + report.title + ": " + std::to_string(result) + "</p>";
    }
};

// Included for demonstration
int main() {
    Report report("Total sales", "51 42 39 60");
    ReportProcessor processor;
    ReportFormatter formatter;
    int result = processor.processData(report.data);
    std::string formattedResult = formatter.format(report, result);
    std::cout << formattedResult;
}
