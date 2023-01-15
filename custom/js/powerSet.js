function combinator(n, r) {
  let ind = [];
  const result = [];
  for (let i = 0; i < r; i++) {
    ind.push(i);
  }
  result.push([...ind]);
  while (ind[0] < n - r) {
    for (let i = r - 1; i >= 0; i--) {
      ind[i]++;
      if (ind[i] > n - r + i) {
        ind[i] = ind[i - 1] + 2;
        if (ind[i] > n - r + i && ind[i + 1]) {
          ind[i + 1] = ind[i - 1] + 2;
        } else if (ind[i + 1]) {
          ind[i + 1] = ind[i] + 1;
        }
      } else {
        break;
      }
    }

    result.push([...ind]);
  }
  return result;
}
console.log(combinator(8, 5));
