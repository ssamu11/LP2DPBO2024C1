/*Saya Muhammad Rafie Alhabsyi Setiawan NIM 2202400
mengerjakan soal Latihan Praktikum 2
dalam mata kuliah DESAIN DAN PEMROGRAMAN BERORIENTASI
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "Product.h"
#include <string>

class Clothing : public Product {
private:
    std::string size;
    std::string material;
    std::string gender;

public:
    Clothing(int idProduct, std::string name, std::string brand, double price, std::string size, std::string material, std::string gender);
    std::string getSize();
    void setSize(std::string size);
    std::string getMaterial();
    void setMaterial(std::string material);
    std::string getGender();
    void setGender(std::string gender);
};


