const fs = require('fs');
const input = fs.readFileSync(0, 'utf8').trim().split('\n');

let currentline = 0;
function readline() {
  return input[currentline++];
}

let T = Number(readline());
const solve = (S, F) => {
  let attmpts = 0;
  for (let i = 0; i < S.length; i++) {
    const arr = [];
    const sin = S.charCodeAt(i);
    for (let j = 0; j < F.length; j++) {
      const key = F.charCodeAt(j);
      arr.push(
        sin > key
          ? Math.min(Math.abs(sin - key), Math.abs(26 - sin + key))
          : Math.min(Math.abs(key - sin), Math.abs(26 + sin - key))
      );
    }
    attmpts = attmpts + Math.min(...arr);
  }

  return attmpts;
};

for (let i = 1; i <= T; i++) {
  let S = readline();
  let F = readline();
  console.log(`Case #${i}: ${solve(S, F)}`);
}
