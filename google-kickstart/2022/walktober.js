const fs = require('fs');
const input = fs.readFileSync('../i.txt', 'utf8').trim().split('\n');

let currentLine = 0;

const readline = () => {
  return input[currentLine++];
};

const solve = (M, N, P, MemInfo) => {
  let pInfo = MemInfo[P - 1];
  let ans = 0;
  for (let i = 0; i < N; i++) {
    let max = Math.max(...MemInfo.map((e) => e[i]));
    let pStep = pInfo[i];

    if (pStep < max) {
      ans += max - pStep;
    }
  }

  return ans;
};

const T = readline();

for (let i = 1; i <= T; i++) {
  const [Memb, Days, Id] = readline()
    .trim()
    .split(' ')
    .map((t) => Number(t));
  let MemberInfo = [];
  for (let j = 1; j <= Memb; j++) {
    const MemL = readline()
      .trim()
      .split(' ')
      .map((t) => Number(t));
    MemberInfo.push(MemL);
  }
  console.log(`Case #${i}: ${solve(Memb, Days, Id, MemberInfo)}`);
}
