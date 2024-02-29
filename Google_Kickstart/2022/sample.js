const fs = require('fs');
const input = fs.readFileSync('../i.txt', 'utf8').trim().split('\n');

let currentLine = 0;

const readline = () => {
  return input[currentLine++];
};

const solve = (N, M, C_) => {
  let ans = 0;
  let total = C_.reduce((x, y) => x + y, 0);
  ans = total % M;
  return ans;
};

const T = readline();

for (let i = 1; i <= T; i++) {
  const [N, M] = readline()
    .split(' ')
    .map((x) => Number(x));
  const C_ = readline()
    .split(' ')
    .map((x) => Number(x));

  console.log(`Case #${i}: ${solve(N, M, C_)}`);
}
