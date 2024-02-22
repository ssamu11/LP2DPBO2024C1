/*Saya Muhammad Rafie Alhabsyi Setiawan NIM 2202400
mengerjakan soal Latihan Praktikum 2
dalam mata kuliah DESAIN DAN PEMROGRAMAN BERORIENTASI
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <string>

class Product {
private:
    int idProduct;
    std::string name;
    std::string brand;
    double price;

public:
    Product(int idProduct, std::string name, std::string brand, double price);
    int getIdProduct();
    void setIdProduct(int idProduct);
    std::string getName();
    void setName(std::string name);
    std::string getBrand();
    void setBrand(std::string brand);
    double getPrice();
    void setPrice(double price);
};

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
