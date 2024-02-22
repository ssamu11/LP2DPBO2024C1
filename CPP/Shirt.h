/*Saya Muhammad Rafie Alhabsyi Setiawan NIM 2202400
mengerjakan soal Latihan Praktikum 2
dalam mata kuliah DESAIN DAN PEMROGRAMAN BERORIENTASI
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "Clothing.h"
#include <string>

class Shirt : public Clothing {
private:
    std::string color;
    std::string sleeveType;

public:
    Shirt(int idProduct, std::string name, std::string brand, double price, std::string size, std::string material, std::string gender, std::string color, std::string sleeveType);
    std::string getColor();
    void setColor(std::string color);
    std::string getSleeveType();
    void setSleeveType(std::string sleeveType);
};


