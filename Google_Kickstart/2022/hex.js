const fs = require('fs');
const input = fs.readFileSync('../i.txt', 'utf8').trim().split('\n');

let currentLine = 0;

const readline = () => {
  return input[currentLine++];
};

const solve = (W, G) => {};

const T = readline();

for (let i = 1; i <= T; i++) {
  const W = readline();
  let G = [];
  for (let i = 0; i < w; i++) {
    let a = readline().trim().split('');
    G.push(a);
  }
  console.log(grid);
  console.log(`Case #${i}: ${solve(W, G)}`);
}
