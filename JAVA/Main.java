/*Saya Muhammad Rafie Alhabsyi Setiawan NIM 2202400
mengerjakan soal Latihan Praktikum 2
dalam mata kuliah DESAIN DAN PEMROGRAMAN BERORIENTASI
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Masukkan data untuk Shirt 1:");
        Shirt shirt1 = createShirt(scanner);

        System.out.println("\nMasukkan data untuk Shirt 2:");
        Shirt shirt2 = createShirt(scanner);

        System.out.println("\nMasukkan data untuk Shirt 3:");
        Shirt shirt3 = createShirt(scanner);

        System.out.println("\nData Shirt:");
        displayTableHeader();
        displayClothingDetails(shirt1);
        displayClothingDetails(shirt2);
        displayClothingDetails(shirt3);
        displayTableFooter();

        scanner.close();
    }

    public static Shirt createShirt(Scanner scanner) {
        System.out.print("ID Product: ");
        int idProduct = scanner.nextInt();
        scanner.nextLine();
        System.out.print("Name: ");
        String name = scanner.nextLine();
        System.out.print("Brand: ");
        String brand = scanner.nextLine();
        System.out.print("Price: ");
        double price = scanner.nextDouble();
        scanner.nextLine();
        System.out.print("Size: ");
        String size = scanner.nextLine();
        System.out.print("Material: ");
        String material = scanner.nextLine();
        System.out.print("Gender: ");
        String gender = scanner.nextLine();
        System.out.print("Color: ");
        String color = scanner.nextLine();
        System.out.print("Sleeve Type: ");
        String sleeveType = scanner.nextLine();

        return new Shirt(idProduct, name, brand, price, size, material, gender, color, sleeveType);
    }

    public static void displayTableHeader() {
        int idLength = "ID Product".length();
        int nameLength = "Name".length();
        int brandLength = "Brand".length();
        int priceLength = "Price".length();
        int sizeLength = "Size".length();
        int materialLength = "Material".length();
        int genderLength = "Gender".length();
        int colorLength = "Color".length();
        int sleeveTypeLength = "Sleeve Type".length();

        String line = "+-" + "-".repeat(idLength) + "-+-" + "-".repeat(nameLength) + "-+-" +
                "-".repeat(brandLength) + "-+-" + "-".repeat(priceLength) + "-+-" +
                "-".repeat(sizeLength) + "-+-" + "-".repeat(materialLength) + "-+-" +
                "-".repeat(genderLength) + "-+-" + "-".repeat(colorLength) + "-+-" +
                "-".repeat(sleeveTypeLength) + "-+";

        System.out.println(line);
        System.out.printf(
                "| %-" + idLength + "s | %-" + nameLength + "s | %-" + brandLength + "s | %-" + priceLength + "s | %-" +
                        sizeLength + "s | %-" + materialLength + "s | %-" + genderLength + "s | %-" + colorLength + "s | %-" + sleeveTypeLength + "s |\n",
                "ID Product", "Name", "Brand", "Price", "Size", "Material", "Gender", "Color", "Sleeve Type");
        System.out.println(line);
    }

    public static void displayClothingDetails(Shirt shirt) {
        System.out.printf("| %-10d | %-4s | %-5s | %-5.2f | %-4s | %-8s | %-6s | %-5s | %-11s |\n",
                shirt.getIdProduct(), shirt.getName(), shirt.getBrand(), shirt.getPrice(), shirt.getSize(),
                shirt.getMaterial(), shirt.getGender(), shirt.getColor(), shirt.getSleeveType());
    }

    public static void displayTableFooter() {
        int idLength = "ID Product".length();
        int nameLength = "Name".length();
        int brandLength = "Brand".length();
        int priceLength = "Price".length();
        int sizeLength = "Size".length();
        int materialLength = "Material".length();
        int genderLength = "Gender".length();
        int colorLength = "Color".length();
        int sleeveTypeLength = "Sleeve Type".length();

        String line = "+-" + "-".repeat(idLength) + "-+-" + "-".repeat(nameLength) + "-+-" +
                "-".repeat(brandLength) + "-+-" + "-".repeat(priceLength) + "-+-" +
                "-".repeat(sizeLength) + "-+-" + "-".repeat(materialLength) + "-+-" +
                "-".repeat(genderLength) + "-+-" + "-".repeat(colorLength) + "-+-" +
                "-".repeat(sleeveTypeLength) + "-+";

        System.out.println(line);
    }
}
