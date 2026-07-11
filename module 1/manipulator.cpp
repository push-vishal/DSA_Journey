#include <iostream>
#include <iomanip>

int main() {
    double price1 = 12.50;
    double price2 = 1245.89;

    // Header
    std::cout << std::left << std::setw(15) << "Item" << std::right << std::setw(10) << "Price" << std::endl;
    std::cout << std::setfill('-') << std::setw(25) << "" << std::setfill(' ') << std::endl;

    // Data rows with fixed decimals
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::left << std::setw(15) << "Apples" << std::right << std::setw(10) << price1 << std::endl;
    std::cout << std::left << std::setw(15) << "Laptop" << std::right << std::setw(10) << price2 << std::endl;

    return 0;
}
