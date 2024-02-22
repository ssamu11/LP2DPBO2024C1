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


