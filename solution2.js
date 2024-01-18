const readlineSync = require('readline-sync');

let product_A = 20,
  product_B = 40,
  product_C = 50,
  pr_A,
  pr_B,
  pr_C,
  total_A,
  total_B,
  total_C;
let discount_1 = "flat_10_discount",
  discount_2 = "bulk_5_discount",
  discount_3 = "bulk_10_discount",
  discount_4 = "tiered_50_discount";
let dis1 = 0,
  dis2 = 0,
  dis3 = 0,
  dis4 = 0,
  total = 0,
  giftWrapFee = 0,
  shippingFee = 0;
let giftPack = 0;

pr_A = parseInt(readlineSync.question('product A: '), 10);
giftPack = parseInt(readlineSync.question('Will product A be wrapped in a gift? If yes, enter 1; else enter 0: '), 10);
if (giftPack === 1) giftWrapFee += parseFloat(pr_A);

giftPack = 0;

pr_B = parseInt(readlineSync.question('product B: '), 10);
giftPack = parseInt(readlineSync.question('Will product B be wrapped in a gift? If yes, enter 1; else enter 0: '), 10);
if (giftPack === 1) giftWrapFee += parseFloat(pr_B);

giftPack = 0;

pr_C = parseInt(readlineSync.question('product C: '), 10);
giftPack = parseInt(readlineSync.question('Will product C be wrapped in a gift? If yes, enter 1; else enter 0: '), 10);

if (giftPack === 1) giftWrapFee += parseFloat(pr_C);

giftPack = 0;

total_A = pr_A * product_A;
total_B = pr_B * product_B;
total_C = pr_C * product_C;
total = parseFloat(total_A) + parseFloat(total_B) + parseFloat(total_C);

if (total > 200) dis1 = 10;

if (pr_A > 10) dis2 += parseFloat(total_A / 20.0);
if (pr_B > 10) dis2 += parseFloat(total_B / 20.0);
if (pr_C > 10) dis2 += parseFloat(total_C / 20.0);

if (pr_A + pr_B + pr_C > 20) dis3 = parseFloat(total / 10.0);

if (pr_A + pr_B + pr_C > 30) {
  if (pr_A > 15) {
    dis4 += parseFloat(((pr_A - 15) * product_A) / 2);
  }

  if (pr_B > 15) {
    dis4 += parseFloat(((pr_B - 15) * product_B) / 2);
  }

  if (pr_C > 15) {
    dis4 += parseFloat(((pr_C - 15) * product_C) / 2);
  }
}

console.log("product A-> " + " quantity: " + pr_A + " price: $" + total_A);
console.log("product B-> " + " quantity: " + pr_B + " price: $" + total_B);
console.log("product C-> " + " quantity: " + pr_C + " price: $" + total_C);
console.log("subTotal: $" + total);

if (dis1 >= dis2 && dis1 >= dis3 && dis1 >= dis4) {
  console.log(discount_1 + " : $" + dis1);
  total -= dis1;
} 
else if (dis2 >= dis1 && dis2 >= dis3 && dis2 >= dis4) {
  console.log(discount_2 + " : $" + dis2);
  total -= dis2;
} 
else if (dis3 >= dis1 && dis3 >= dis2 && dis3 >= dis4) {
  console.log(discount_3 + " : $" + dis3);
  total -= dis3;
} 
else if (dis4 >= dis1 && dis4 >= dis2 && dis4 >= dis3) {
  console.log(discount_4 + " : $" + dis4);
  total -= dis4;
}

shippingFee = ((parseFloat(pr_A) + parseFloat(pr_B) + parseFloat(pr_C)) / 10) * 5;

if ((parseFloat(pr_A) + parseFloat(pr_B) + parseFloat(pr_C)) % 10) shippingFee += 5;

total += parseFloat(giftWrapFee + shippingFee);

console.log("shippingFee: $" + shippingFee + " " + "giftWrapFee: $" + giftWrapFee);
console.log("Total: $" + total);
