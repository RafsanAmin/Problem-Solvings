const [length, invert] = process.argv.slice(2, 4);
const subtotal = (x) => 2 * x - 1;

const printf = (msg) => {
  process.stdout.write(msg);
};
const printPyramid = (i) => {
  const sb = subtotal(i);
  for (let k = length - i; k >= 0; k--) {
    printf(' ');
  }
  for (let j = 1; j <= sb; j++) {
    printf('#');
  }
  printf('\n');
};

if (invert === 'invert') {
  for (let i = length; i >= 1; i--) {
    printPyramid(i);
  }
} else {
  for (let i = 1; i <= length; i++) {
    printPyramid(i);
  }
}
