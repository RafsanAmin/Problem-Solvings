const fs = require('fs');
const input = fs.readFileSync('../i.txt', 'utf8').trim().split('\n');

let currentLine = 0;

const readline = () => {
  return input[currentLine++];
};
/**
  @param {string} P 
  @param {number} L
*/

const solve = (L, P) => {
  let ret = P;
  let numbers = (P.match(/([0-9])/g) || []).length;
  let uppercase = (P.match(/[A-Z]/g) || []).length;
  let lowercase = (P.match(/[a-z]/g) || []).length;
  let special = (P.match(/(#|@|\*|&)/g) || []).length;

  // console.log([numbers, uppercase, lowercase, special, ret]);

  if (numbers < 1) {
    ret += '1';
  }
  if (uppercase < 1) {
    ret += 'A';
  }
  if (lowercase < 1) {
    ret += 'a';
  }
  if (special < 1) {
    ret += '@';
  }

  if (P.length < 7) {
    const x = ret.length;
    for (let i = 0; i < 7 - x; i++) {
      ret += 'A';
    }
  }

  return ret;
};

const T = readline();

for (let i = 1; i <= T; i++) {
  const L = Number(readline().trim());
  const P = readline().trim();
  console.log(`Case #${i}: ${solve(L, P)}`);
}
