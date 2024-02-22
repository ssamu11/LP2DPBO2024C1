<?php
require_once 'Clothing.php';

class Shirt extends Clothing {
    private $color;
    private $sleeveType;

    public function __construct($idProduct, $name, $brand, $price, $size, $material, $gender, $color, $sleeveType) {
        parent::__construct($idProduct, $name, $brand, $price, $size, $material, $gender);
        $this->color = $color;
        $this->sleeveType = $sleeveType;
    }

    public function getColor() {
        return $this->color;
    }

    public function setColor($color) {
        $this->color = $color;
    }

    public function getSleeveType() {
        return $this->sleeveType;
    }

    public function setSleeveType($sleeveType) {
        $this->sleeveType = $sleeveType;
    }
}
?>
