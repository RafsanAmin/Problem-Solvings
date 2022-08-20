const fs = require('fs');
const input = fs
  .readFileSync('C:\\Users\\RAFSAN-PC\\Downloads\\test_data\\test_set_2\\ts2_input.txt', 'utf8')
  .trim()
  .split('\n');

let currentLine = 0;

/**
@param {number} A
 */

const rl = () => {
  return input[currentLine++];
};
const Solve = (N, M, A) => {
  A.sort((a, b) => b - a);
  let sA = A.slice(M - 1);
  let bA = A.slice(0, M - 1);
  let median1 =
    sA.reduce((prev, e) => {
      return prev + e;
    }, 0) / sA.length;
  let median2 = bA.reduce((prev, e) => {
    return prev + e;
  }, 0);
  return median1 + median2;
};

const T = Number(rl());

for (let i = 1; i <= T; i++) {
  const [N, M] = rl()
    .trim()
    .split(' ')
    .map((e) => Number(e));
  const A = rl()
    .trim()
    .split(' ')
    .map((e) => Number(e));

  fs.writeFileSync(__dirname + '/a.txt');
  console.log(`Case #${i}: ${Solve(N, M, A)}`);
}
