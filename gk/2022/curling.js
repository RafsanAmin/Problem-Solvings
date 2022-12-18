const fs = require('fs');
const input = fs.readFileSync('../i.txt', 'utf8').trim().split('\n');

let currentLine = 0;

const readline = () => {
  return input[currentLine++];
};

const largeReadline = (r, d) => {
  if (r === 0) {
    return [[], 0];
  }
  let arr = [];
  let min = Infinity;
  let prev = Infinity;
  for (let i = 0; i < r; i++) {
    let x = readline()
      .trim()
      .split(' ')
      .map((t) => Number(t));
    let l = Math.sqrt(x[0] * x[0] + x[1] * x[1]);
    // console.log(i, '===========', l, x);
    if (l <= d) {
      arr.push(l);
      // console.log(l, prev);
      min = Math.min(l, prev, min);
      prev = l;
    }
  }
  // console.log('-----');
  return [arr, min];
};

const solve = (tRMin, tYMin, tRStat, tYStat) => {
  if (tYStat.length === 0) {
    return tRStat.length + ' 0';
  }
  if (tRStat.length === 0) {
    return '0 ' + tYStat.length;
  }
  if (tRMin > tYMin) {
    return '0 ' + tYStat.filter((e) => e < tRMin).length;
  }
  if (tRMin < tYMin) {
    return tRStat.filter((e) => e < tYMin).length + ' 0';
  }
};

const T = readline();

for (let i = 1; i <= T; i++) {
  const [r1, r0] = readline()
    .trim()
    .split(' ')
    .map((t) => Number(t));
  const d = r1 + r0;
  const tR = Number(readline().trim());
  let [tRStat, tRMin] = largeReadline(tR, d);
  const tY = Number(readline().trim());
  let [tYStat, tYMin] = largeReadline(tY, d);
  // console.log(d, tR, tRMin, tYMin, tRStat, tYStat);
  console.log(`Case #${i}: ${solve(tRMin, tYMin, tRStat, tYStat)}`);
}
