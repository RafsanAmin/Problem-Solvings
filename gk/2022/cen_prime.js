const fs = require('fs');
const input = fs.readFileSync('../i.txt', 'utf-8').trim().split('\n');

let currentLine = 0;

const readline = () => {
  return input[currentLine++];
};

const solve = (S) => {
  const l = S.length;
  const c = S.charAt(l - 1);
  if (c === 'y' || c === 'Y') {
    return 'nobody';
  } else if (c.search(/a|e|i|o|u/gi) === 0) {
    return 'Alice';
  } else {
    return 'Bob';
  }
};

const T = Number(readline());

for (let i = 1; i <= T; i++) {
  const S = readline().trim();
  console.log(`Case #${i}: ${S} is ruled by ${solve(S)}.`);
}
