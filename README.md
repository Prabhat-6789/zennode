# Catalogue Pricing and Discount Calculator

This program calculates the total price for a set of products based on a given catalogue and applies discounts based on certain rules. The program also considers gift wrap fees and shipping fees. The discounts are applied based on specific rules, and the program selects the most beneficial one for the customer.

## Supported Products

- Product A: $20
- Product B: $40
- Product C: $50

## Discount Rules

1. **flat_10_discount**: Apply a flat $10 discount on the cart total if it exceeds $200.
2. **bulk_5_discount**: Apply a 5% discount on the total price of any single product if its quantity exceeds 10 units.
3. **bulk_10_discount**: Apply a 10% discount on the cart total if the total quantity of all products exceeds 20 units.
4. **tiered_50_discount**: If the total quantity exceeds 30 units and the quantity of any single product is greater than 15, apply a 50% discount on the excess units above 15.

## Fees

- Gift wrap fee: $1 per unit.
- Shipping fee: 10 units can be packed in one package, and the shipping fee for each package is $5.

## Usage

### C++

1. Ensure you have a C++ compiler installed on your system (e.g., g++).
2. Clone the repository.
3. Navigate to the zennode directory.
4. compile the Program.
5. Run the Program.
6. Follow the on-screen prompts to enter the quantity and gift wrap information for each product.

### Javascript
1. Ensure you have Node.js installed on your system.
2. Navigate to the Zennode directory.
3. install `readline-sync` library through `npm`. This is because we could not use `prompt` on Node.js. So, for taking input we will have to install it.
4. Run the program.
5. Follow the on-screen prompts to enter the quantity and gift wrap information for each product.

##Notes
- The program selects the most beneficial discount if multiple discounts are applicable.
