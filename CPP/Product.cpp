#include "Product.h"

Product::Product(int idProduct, std::string name, std::string brand, double price) {
    this->idProduct = idProduct;
    this->name = name;
    this->brand = brand;
    this->price = price;
}

int Product::getIdProduct() {
    return idProduct;
}

void Product::setIdProduct(int idProduct) {
    this->idProduct = idProduct;
}

std::string Product::getName() {
    return name;
}

void Product::setName(std::string name) {
    this->name = name;
}

std::string Product::getBrand() {
    return brand;
}

void Product::setBrand(std::string brand) {
    this->brand = brand;
}

double Product::getPrice() {
    return price;
}

void Product::setPrice(double price) {
    this->price = price;
}
