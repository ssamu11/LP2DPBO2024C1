from shirt import Shirt

def createShirt():
    idProduct = int(input("ID Product: "))
    name = input("Name: ")
    brand = input("Brand: ")
    price = float(input("Price: "))
    size = input("Size: ")
    material = input("Material: ")
    gender = input("Gender: ")
    color = input("Color: ")
    sleeveType = input("Sleeve Type: ")

    return Shirt(idProduct, name, brand, price, size, material, gender, color, sleeveType)


def displayTableHeader():
    print("+------------+-------+-------+-------+-------+----------+--------+--------+-------------+")
    print("| ID Product | Name  | Brand | Price | Size  | Material | Gender | Color  | Sleeve Type |")
    print("+------------+-------+-------+-------+-------+----------+--------+--------+-------------+")


def displayClothingDetails(shirt):
    print("| {:^10} | {:^5} | {:^5} | {:^5} | {:^5} | {:^8} | {:^6} | {:^6} | {:^11} |"
          .format(shirt.getIdProduct(), shirt.getName(), shirt.getBrand(), shirt.getPrice(), shirt.getSize(),
                  shirt.getMaterial(), shirt.getGender(), shirt.getColor(), shirt.getSleeveType()))


def displayTableFooter():
    print("+------------+-------+-------+-------+-------+----------+--------+--------+-------------+")


def main():
    print("Enter data for Shirt 1:")
    shirt1 = createShirt()

    print("\nEnter data for Shirt 2:")
    shirt2 = createShirt()

    print("\nEnter data for Shirt 3:")
    shirt3 = createShirt()

    print("\nShirt Data:")
    displayTableHeader()
    displayClothingDetails(shirt1)
    displayClothingDetails(shirt2)
    displayClothingDetails(shirt3)
    displayTableFooter()


if __name__ == "__main__":
    main()
