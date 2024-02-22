#include <iostream>
#include <iomanip> 
#include <vector>
#include "Product.cpp"
#include "Clothing.cpp"
#include "Shirt.cpp"

void displayTableHeader();
void displayClothingDetails(Shirt shirt);
void displayTableFooter();
Shirt createShirt();

int main() {
    std::vector<Shirt> shirts; 
    shirts.reserve(3); 

    
    for (int i = 0; i < 3; ++i) {
        std::cout << "Enter data for Shirt " << i+1 << ":\n";
        shirts.push_back(createShirt());
    }

    
    std::cout << "\nShirt Data:\n";
    displayTableHeader();
    for (const auto& shirt : shirts) {
        displayClothingDetails(shirt);
    }
    displayTableFooter();

    return 0;
}

void displayTableHeader() {
    std::cout << "+------------+-------+-------+-------+-------+----------+--------+--------+-------------+\n";
    std::cout << "| ID Product | Name  | Brand | Price | Size  | Material | Gender | Color  | Sleeve Type |\n";
    std::cout << "+------------+-------+-------+-------+-------+----------+--------+--------+-------------+\n";
}

void displayClothingDetails(Shirt shirt) {
    std::cout << "| " << std::setw(10) << shirt.getIdProduct() << " | " << std::setw(5) << shirt.getName() << " | "
              << std::setw(5) << shirt.getBrand() << " | " << std::setw(5) << shirt.getPrice() << " | "
              << std::setw(5) << shirt.getSize() << " | " << std::setw(8) << shirt.getMaterial() << " | "
              << std::setw(6) << shirt.getGender() << " | " << std::setw(6) << shirt.getColor() << " | "
              << std::setw(11) << shirt.getSleeveType() << " |\n";
}

void displayTableFooter() {
    std::cout << "+------------+-------+-------+-------+-------+----------+--------+--------+-------------+\n";
}

Shirt createShirt() {
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

    return Shirt(idProduct, name, brand, price, size, material, gender, color, sleeveType);
}