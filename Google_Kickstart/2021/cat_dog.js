const fs = require('fs');
const input = fs.readFileSync('../i.txt', 'utf-8').trim().split('\n');

let currentline = 0;
function readline() {
  return input[currentline++];
}

const solve = (A, D, C, M, L) => {
  let sol = false;
  let CAT = C;
  let DOG = D;
  let DOGS = 0;
  let CATS = 0;
  for (let i = 0; i < A; i++) {
    const animal = L[i];
    if (animal === 'C') {
      CATS++;
    } else if (animal === 'D') {
      DOGS++;
    }
  }
  for (let i = 0; i < A; i++) {
    const animal = L[i];
    if (animal === 'C') {
      if (CAT <= 0 && DOGS) {
        sol = true;
        break;
      }
      CAT--;
      CATS--;
    } else if (animal === 'D') {
      if (DOG <= 0 && DOGS) {
        sol = true;
        break;
      }
      DOG--;
      DOGS--;
      CAT += M;
    }
  }
  return sol ? 'NO' : 'YES';
};

let T = readline();
for (let i = 1; i <= T; i++) {
  let [A, D, C, M] = readline()
    .split(' ')
    .map((s) => Number(s));

  let L = readline();
  console.log(`Case #${i}: ${solve(A, D, C, M, L)}`);
}
