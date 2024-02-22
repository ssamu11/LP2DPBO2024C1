#include "Clothing.h"

Clothing::Clothing(int idProduct, std::string name, std::string brand, double price, std::string size, std::string material, std::string gender)
        : Product(idProduct, name, brand, price) {
    this->size = size;
    this->material = material;
    this->gender = gender;
}

std::string Clothing::getSize() {
    return size;
}

void Clothing::setSize(std::string size) {
    this->size = size;
}

std::string Clothing::getMaterial() {
    return material;
}

void Clothing::setMaterial(std::string material) {
    this->material = material;
}

std::string Clothing::getGender() {
    return gender;
}

void Clothing::setGender(std::string gender) {
    this->gender = gender;
}
