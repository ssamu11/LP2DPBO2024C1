#include "Main.h"
#include <iostream>

Shirt* Main::createShirt() {
    int idProduct;
    std::string name, brand, size, material, gender, color, sleeveType;
    double price;

    std::cout << "ID Product: ";
    std::cin >> idProduct;
    std::cin.ignore();

    std::cout << "Name: ";
    std::getline(std::cin, name);

    std::cout << "Brand: ";
    std::getline(std::cin, brand);

    std::cout << "Price: ";
    std::cin >> price;
    std::cin.ignore();

    std::cout << "Size: ";
    std::getline(std::cin, size);

    std::cout << "Material: ";
    std::getline(std::cin, material);

    std::cout << "Gender: ";
    std::getline(std::cin, gender);

    std::cout << "Color: ";
    std::getline(std::cin, color);

    std::cout << "Sleeve Type: ";
    std::getline(std::cin, sleeveType);

    return new Shirt(idProduct, name, brand, price, size, material, gender, color, sleeveType);
}

void Main::displayTableHeader() {
    std::cout << "+------------+---------+--------+-------+------+---------+--------+---------+-------------+" << std::endl;
    std::cout << "| ID Product | Name    | Brand  | Price | Size | Material| Gender | Color   | Sleeve Type |" << std::endl;
    std::cout << "+------------+---------+--------+-------+------+---------+--------+---------+-------------+" << std::endl;
}

void Main::displayClothingDetails(Shirt* shirt) {
    printf("| %-10d | %-7s | %-6s | %-5.2f | %-4s | %-7s | %-6s | %-7s | %-11s |\n",
           shirt->getIdProduct(), shirt->getName().c_str(), shirt->getBrand().c_str(), shirt->getPrice(), shirt->getSize().c_str(),
           shirt->getMaterial().c_str(), shirt->getGender().c_str(), shirt->getColor().c_str(), shirt->getSleeveType().c_str());
}

void Main::displayTableFooter() {
    std::cout << "+------------+---------+--------+-------+------+---------+--------+---------+-------------+" << std::endl;
}
