const fs = require('fs');
const input = fs.readFileSync('../i.txt', 'utf8').trim().split('\n');

let currentline = 0;
function readline() {
  return input[currentline++];
}

const colors = {
  U: 'U',
  R: 'R',
  Y: 'Y',
  B: 'B',
  O: 'RY',
  P: 'RB',
  G: 'BY',
  A: 'RYB',
};

const COLOR = {
  includes(key, existsin) {
    return key.split('').every((x) => existsin.includes(x));
  },
  compare(a, b) {
    return a.split('').filter((x) => b.includes(x)).length;
  },
};
const solve = (N, P) => {
  let needCol = 0;
  let cache = '';
  for (let i = 0; i < N; i++) {
    let color = colors[P[i]];
    let compare = COLOR.compare(color, cache);
    if (color === 'U') {
    } else if (color !== cache) {
      if (COLOR.includes(color, cache)) {
      } else if (COLOR.includes(cache, color) && cache !== '') {
        needCol += color.length - cache.length;
      } else if (compare) {
        needCol += color.length - compare;
      } else {
        needCol += color.length;
      }
    }
    console.log(color, needCol, cache);

    cache = color;
  }
  return needCol;
};

let T = readline();

for (let t = 1; t <= T; t++) {
  const N = Number(readline());
  const paint = readline();
  console.log(`Case #${t}: ${solve(N, paint)}`);
}
