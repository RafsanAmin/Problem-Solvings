let n = 1000;

Math.fact = (num) => {
  let ret = 1;
  for (let i = Math.floor(num); i > 1; i--) {
    ret = ret * i;
  }
  return ret;
};

let numb = Math.pow(Math.fact(n) / Math.pow(n, n), 1 / n);

console.log(numb);
