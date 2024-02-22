#include "Shirt.h"

Shirt::Shirt(int idProduct, std::string name, std::string brand, double price, std::string size, std::string material, std::string gender, std::string color, std::string sleeveType)
        : Clothing(idProduct, name, brand, price, size, material, gender) {
    this->color = color;
    this->sleeveType = sleeveType;
}

std::string Shirt::getColor() {
    return color;
}

void Shirt::setColor(std::string color) {
    this->color = color;
}

std::string Shirt::getSleeveType() {
    return sleeveType;
}

void Shirt::setSleeveType(std::string sleeveType) {
    this->sleeveType = sleeveType;
}
