#include <string>

class Clothing {
private:
    int idProduct;
    std::string name;
    std::string brand;
    double price;
    std::string size;
    std::string material;
    std::string gender;

public:
    Clothing(int idProduct, std::string name, std::string brand, double price, std::string size, std::string material, std::string gender);
    int getIdProduct();
    void setIdProduct(int idProduct);
    std::string getName();
    void setName(std::string name);
    std::string getBrand();
    void setBrand(std::string brand);
    double getPrice();
    void setPrice(double price);
    std::string getSize();
    void setSize(std::string size);
    std::string getMaterial();
    void setMaterial(std::string material);
    std::string getGender();
    void setGender(std::string gender);
};

Clothing::Clothing(int idProduct, std::string name, std::string brand, double price, std::string size, std::string material, std::string gender) {
    this->idProduct = idProduct;
    this->name = name;
    this->brand = brand;
    this->price = price;
    this->size = size;
    this->material = material;
    this->gender = gender;
}

int Clothing::getIdProduct() {
    return idProduct;
}

void Clothing::setIdProduct(int idProduct) {
    this->idProduct = idProduct;
}

std::string Clothing::getName() {
    return name;
}

void Clothing::setName(std::string name) {
    this->name = name;
}

std::string Clothing::getBrand() {
    return brand;
}

void Clothing::setBrand(std::string brand) {
    this->brand = brand;
}

double Clothing::getPrice() {
    return price;
}

void Clothing::setPrice(double price) {
    this->price = price;
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



