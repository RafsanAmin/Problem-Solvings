// OK OK TLE

const fs = require('fs');
const input = fs.readFileSync('i.txt', 'utf8').trim().split('\n');

let currentline = 0;
function readline() {
  return input[currentline++];
}

const REGEXP = /(12|23|34|45|56|67|78|89|90|01)/;

const solve = (N, S) => {
  let string = S;
  for (let i = 0; i <= Infinity; i++) {
    let re = string
      .replace(/01/g, '2')
      .replace(/12/g, '3')
      .replace(/23/g, '4')
      .replace(/34/g, '5')
      .replace(/45/g, '6')
      .replace(/56/g, '7')
      .replace(/67/g, '8')
      .replace(/78/g, '9')
      .replace(/89/g, '0')
      .replace(/90/g, '1');
    if (re === string) {
      break;
    } else {
      string = re;
    }
  }
  return string;
};

let T = readline();

for (let t = 1; t <= T; t++) {
  const N = Number(readline());
  const S = readline();
  console.log(`Case #${t}: ${solve(N, S)}`);
}
