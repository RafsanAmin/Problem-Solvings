const readline = require('readline');

let salary = 16500;
let rateHS = 55;
let medSalary = 700;
let Chanda = 90;

let netSalary = salary + salary * (rateHS / 100) + medSalary - Chanda;

console.log(netSalary);
