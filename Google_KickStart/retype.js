const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split('\n');

let currentline = 0;
function readline() {
  return input[currentline++];
}

const solve = (n, k, s) => {
  return k - 1 + Math.min(n + 1, k - s + n - s + 1);
};

let T = readline();
for (let i = 1; i <= T; i++) {
  let [N, K, S] = readline().split(' ');
  console.log(`Case #${i}: ${solve(Number(N), Number(K), Number(S))}`);
}
