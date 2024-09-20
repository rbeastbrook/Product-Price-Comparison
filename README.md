# Simple Product-Price-Comparison Tool (C)
This C program allows users to compare the cost per unit of multiple items. It calculates and displays the cost per unit for each item and identifies the item that offers the best value based on the lowest cost per unit.

## Features
- Input the number of items to compare.
- Enter the name, price, and number of units for each item.
- Calculate the cost per unit for each item.
- Display the cost per unit for all items.
- Identify and display the item with the lowest cost per unit.

## Requirements
- C compiler (e.g., GCC) to compile the code.
- Standard C library functions.

## Usage
1. **Compile the Program:**
   Open your terminal and navigate to the directory containing the source code. Compile the program using the following command:

   ```bash
   gcc -o priceCompare priceCompare.c
   ```
2. **Run the Program: Execute the compiled program:**
   ```bash
   ./priceCompare

3. **Input Data:**
- Enter the number of items you want to compare.
-For each item, provide:
  *Name
  *Price
  *Number of units

4. **View Results:**
The program will display the cost per unit for each item and indicate which item has the best value.

## Code Explanation

- **Data Structure:** 
  - The `Item` struct holds the name, price, number of units, and cost per unit for each item.
  
- **Input Handling:** 
  - The program prompts the user to enter data for each item and calculates the cost per unit.

- **Cost Calculation:** 
  - The cost per unit is computed as `price / units`. A warning is issued if the number of units is zero.

- **Comparison Logic:**
  - The program iterates through the list of items to find the one with the lowest cost per unit.

## Example Input/Output
```bash
Enter the number of items to compare: 3

Enter the name of the item 1: Apples
Enter the price of Apples: 3.00
Enter the number of units of Apples: 1.5

Enter the name of the item 2: Bananas
Enter the price of Bananas: 1.50
Enter the number of units of Bananas: 1.0

Enter the name of the item 3: Cherries
Enter the price of Cherries: 6.00
Enter the number of units of Cherries: 0.5

 Cost per unit for each item: 
Apples: $2.00 per unit 
Bananas: $1.50 per unit 
Cherries: $12.00 per unit 

 The item with the best value is Bananas with a cost of $1.50 per unit.
```

## Contributing

Feel free to submit issues or pull requests for improvements and enhancements!

