/* 
    File: main.cpp 
    Description: Uses preset values for three people and their size of pizza order, then outputs (in order) size by ascending, sorting by name, and adding a price
    and sorting by it.
    Author: Alexander Colon
    Email: alexanc0478@student.vvc.edu
    Course#: cis202
    Section#: <30002>
    Date: 6-1-25
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct PizzaOrder {
    std::string name;
    int size;
};

struct PizzaOrderWithPrice {
    std::string name;
    int size;
    double price;
};

int main() {

    std::vector<PizzaOrder> orders = {
        {"Alice", 12}, {"Bob", 16}, {"Charlie", 10}, {"Diana", 14}
    };
    
    std::cout << "Original Pizza Orders:\n";
    for (const auto& order : orders)
        std::cout << order.name << " " << order.size << " inches\n";
    
    std::cout << "\n";
    
    std::cout << "Sorted by Size (Ascending):\n";
    std::sort(orders.begin(), orders.end(), [](const PizzaOrder& a, const PizzaOrder& b) {
        return a.size < b.size;
    });
    for (const auto& order : orders)
        std::cout << order.name << " " << order.size << " inches\n";
    

    std::cout << "Sorted by Name (Alphabetical):\n";
    std::sort(orders.begin(), orders.end(), [](const PizzaOrder& a, const PizzaOrder& b) {
        return a.name < b.name;
    });
    for (const auto& order : orders)
        std::cout << order.name << " " << order.size << " inches\n";
    
    std::cout << "\n";
    

    std::vector<PizzaOrderWithPrice> ordersWithPrice = {
        {"Alice", 12, 11.99}, {"Bob", 16, 15.49}, {"Charlie", 10, 9.99}, {"Diana", 14, 13.75}
    };
    
    std::cout << "Sorted by Price (Ascending):\n";
    std::sort(ordersWithPrice.begin(), ordersWithPrice.end(), [](const PizzaOrderWithPrice& a, const PizzaOrderWithPrice& b) {
        return a.price < b.price;
    });
    for (const auto& order : ordersWithPrice) {
        std::cout << order.name << " " << order.size << " inches $" << order.price << "\n";
    }
    
    return 0;
}