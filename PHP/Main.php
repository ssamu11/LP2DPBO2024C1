<?php
require_once 'Shirt.php';


$shirt1 = new Shirt(1, 'a', 'x', 1, 'd', 'd', 'd', 'd', 'd');

$shirt2 = new Shirt(2, 'd', 'd', 2, 'd', 'a', 'd', 'd', 'd');

$shirt3 = new Shirt(3, 'd', 'd', 4, 'd', 'd', 'd', 'd', 'd');
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Shirt Data</title>
    <style>
        table {
            width: 100%;
            border-collapse: collapse;
        }
        th, td {
            padding: 8px;
            text-align: left;
            border-bottom: 1px solid #ddd;
        }
        th {
            background-color: #f2f2f2;
        }
    </style>
</head>
<body>

<h2>Shirt Data</h2>

<table>
  <tr>
    <th>ID Product</th>
    <th>Name</th>
    <th>Brand</th>
    <th>Price</th>
    <th>Size</th>
    <th>Material</th>
    <th>Gender</th>
    <th>Color</th>
    <th>Sleeve Type</th>
  </tr>
  <?php

    displayClothingDetailsInHTML($shirt1);
    displayClothingDetailsInHTML($shirt2);
    displayClothingDetailsInHTML($shirt3);
  ?>
</table>

</body>
</html>

<?php

function displayClothingDetailsInHTML($shirt) {
    echo "<tr>";
    echo "<td>{$shirt->getIdProduct()}</td>";
    echo "<td>{$shirt->getName()}</td>";
    echo "<td>{$shirt->getBrand()}</td>";
    echo "<td>{$shirt->getPrice()}</td>";
    echo "<td>{$shirt->getSize()}</td>";
    echo "<td>{$shirt->getMaterial()}</td>";
    echo "<td>{$shirt->getGender()}</td>";
    echo "<td>{$shirt->getColor()}</td>";
    echo "<td>{$shirt->getSleeveType()}</td>";
    echo "</tr>";
}
?>
