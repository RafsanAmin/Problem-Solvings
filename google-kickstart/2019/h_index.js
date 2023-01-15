// OK OK TLE
const fs = require('fs');
const input = fs
  .readFileSync('C:\\Users\\RAFSAN-PC\\Downloads\\test_data(2)\\test_set_2\\ts2_input.txt', 'utf8')
  .trim()
  .split('\n');
let currentline = 0;
function readline() {
  return input[currentline++];
}

const solve = (n, a) => {
  let nextIndex = 1;
  let cache = 0;
  let solution = [];
  let warr = [];

  for (let i = 0; i < a.length; i++) {
    let matched = 0;
    warr.push(a[i]);

    if (cache > 0) {
      if (warr[i] >= nextIndex) {
        matched++;
      }
    } else {
      for (let j = 0; j < warr.length; j++) {
        if (warr[j] >= nextIndex) {
          matched += 1;
        }
      }
    }

    if (cache + matched === nextIndex) {
      solution.push(cache + matched);
      nextIndex++;
      cache = 0;
    } else {
      solution.push(nextIndex - 1);
      cache += matched;
    }
  }

  return solution.join(' ');
};

let T = readline();
for (let i = 1; i <= T; i++) {
  let N = Number(readline());
  let A = readline()
    .split(' ')
    .map((x) => Number(x));
  console.log(`Case #${i}: ${solve(N, A)}`);
}
