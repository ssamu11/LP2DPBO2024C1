from clothing import Clothing

class Shirt(Clothing):
    def __init__(self, idProduct, name, brand, price, size, material, gender, color, sleeveType):
        super().__init__(idProduct, name, brand, price, size, material, gender)
        self.color = color
        self.sleeveType = sleeveType

    def getColor(self):
        return self.color

    def setColor(self, color):
        self.color = color

    def getSleeveType(self):
        return self.sleeveType

    def setSleeveType(self, sleeveType):
        self.sleeveType = sleeveType
