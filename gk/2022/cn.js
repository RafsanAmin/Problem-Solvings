const fs = require('fs');
const input = fs
  .readFileSync('C:\\Users\\RAFSAN-PC\\Downloads\\test_data(1)\\test_set_1\\ts1_input.txt', 'utf8')
  .trim()
  .split('\n');

let currentLine = 0;

const readLine = () => {
  return input[currentLine++];
};
const Solve = (Na) => {
  let N = Na;
  const Nlen = N.length;
  let sum = 0;
  for (let i = 0; i < Nlen; i++) {
    const n = Number(N[i]);
    sum += n;
  }
  let addNum = 9 - (sum % 9);
  let index = Nlen + 1;
  if (addNum === 9) {
    N.splice(1, 0, '0');
  } else {
    for (let i = 0; i <= Nlen; i++) {
      const n = Number(N[i]);
      if (n > addNum) {
        index = i;
        break;
      }
    }
    N.splice(index, 0, addNum.toString());
  }

  return N.join('');
};

const T = Number(readLine());

for (let i = 1; i <= T; i++) {
  const N = [...readLine().trim()];
  console.log(`Case #${i}: ${Solve(N)}`);
}
