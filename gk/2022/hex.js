const fs = require('fs');
const input = fs.readFileSync('../i.txt', 'utf8').trim().split('\n');

let currentLine = 0;

const readline = () => {
  return input[currentLine++];
};

const solve = (N, M, C_) => {};

const T = readline();

for (let i = 1; i <= T; i++) {
  console.log(`Case #${i}: ${solve(N, M, C_)}`);
}
