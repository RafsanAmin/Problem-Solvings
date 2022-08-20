const fs = require('fs');
const input = fs
  .readFileSync('C:\\Users\\RAFSAN-PC\\Downloads\\test_data\\test_set_1\\i.txt', 'utf8')
  .trim()
  .split('\n');

let currentLine = 0;

const readline = () => {
  return input[currentLine++];
};

const Solve = (I, P) => {
  const Er = 'IMPOSSIBLE';
  let Ilen = I.length,
    Plen = P.length;
  let ans = Plen - Ilen;
  let gLen = 0;
  let iPos = 0;
  if ((Ilen === Plen && I !== P) || Ilen > Plen) {
    return Er;
  } else {
    for (let i = 0; i < Plen; i++) {
      const pC = P.charAt(i);
      if (pC === I.charAt(iPos)) {
        gLen++;
        iPos++;
      }
    }
  }
  if (gLen === Ilen) {
    return ans;
  } else {
    return Er;
  }
};

const T = readline();

for (let i = 1; i <= T; i++) {
  const I = readline().trim();
  const P = readline().trim();

  console.log(`Case #${i}: ${Solve(I, P)}`);
}
