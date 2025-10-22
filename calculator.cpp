#include <string>
#include <iostream>

class DiscountCalculator {
private:
    std::unordered_map<std::string, double> discountRates = {
        {"Loyal", 0.95},
        {"VIP", 0.90}
    };

public:
    double calculate(const std::string& customerType, double amount) {
        for (const auto& pair : discountRates) {
            if (pair.first == customerType) {
                return amount * pair.second;
            }
        }
        return amount;
    };
};

// Included for demonstration
int main() {
    DiscountCalculator calc;
    double price = 1000;

    std::cout << "VIP Customer Price: " << calc.calculate("VIP", price) << "\n";
    std::cout << "Loyal Customer Price: " << calc.calculate("Loyal", price) << "\n";
    std::cout << "Other Customer Price: " << calc.calculate("Other", price) << "\n";
}
