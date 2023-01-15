const { format } = require('path');

/**
 * @param {string} ransomNote
 * @param {string} magazine
 * @return {boolean}
 */
var canConstruct = function (ransomNote, magazine) {
  let magazineA = Array.from(magazine);
  let rN = ransomNote.length;
  let mg = magazineA.length;
  let Ok = 0;
  for (let i = 0; i < rN; i++) {
    let char = ransomNote.charAt(i);
    for (let j = 0; j < mg; j++) {
      let charM = magazineA[j];
      if (char === charM) {
        magazineA.splice(j, 1);
        Ok++;
        break;
      }
    }
  }
  if (Ok === rN) {
    return true;
  } else {
    return false;
  }
};

/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (x) {
  if (x < 0 || (x % 10 == 0 && x != 0)) {
    return false;
  } else {
    let revertedNumber = 0;
    while (x > revertedNumber) {
      revertedNumber = revertedNumber * 10 + (x % 10);
      x /= 10;
    }

    // When the length is an odd number, we can get rid of the middle digit by revertedNumber/10
    // For example when the input is 12321, at the end of the while loop we get x = 12, revertedNumber = 123,
    // since the middle digit doesn't matter in palidrome(it will always equal to itself), we can simply get rid of it.
    return x == revertedNumber || x == revertedNumber / 10;
  }
};

/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function (x) {
  let z = Math.ceil(Math.log10(x));
  let x1 = 0;
  let x0 = z > 1 ? x / (2 << (3 * (z / 2 - 1))) : x;

  while (Math.abs(x0 - x1) >= 0.01) {
    x0 = x1 ? x1 : x0;
    x1 = x0 - (x0 * x0 - x) / (2 * x0);
  }
  return Math.trunc(x1);
};

// console.log(mySqrt(2 ** 31 - 1));
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
  const TN = new Map([]);
  let letList = [];
  let bool = false;
  let ans;
  nums.forEach((num, index) => {
    if (num === target - num) {
      letList.push(index);
    } else {
      TN.set(num, [target - num, index]);
    }
  });
  if (letList.length === 2) {
    bool = true;
  }
  if (bool) {
    return letList;
  } else {
    for (let i = 0; i < nums.length; i++) {
      let x = nums[i];
      let [y, i1] = TN.get(x) || [0, 0];
      let [z, i2] = TN.get(y) || [];
      if (z !== undefined && z === x) {
        ans = [i1, i2];
        ans.sort((a, b) => a - b);
        break;
      }
    }
  }
  return ans;
};

/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function (strs) {
  let Base = strs[0];

  for (let i = 1; i < strs.length; i++) {
    let str = strs[i];
    let news = '';
    for (let j = 0; j < str.length; j++) {
      let f = Base.charAt(j);
      let g = str.charAt(j);
      if (f === g) {
        news += f;
      } else {
        break;
      }
    }
    Base = news;
  }

  return Base;
};

var removeElement = function (nums, val) {
  let t = 0;
  const x = nums.length;
  let s = nums.length;
  for (let i = 0; i < s; i++) {
    if (nums[i] === val) {
      let z = nums[s - 1];
      if (i + 1 === s - 1) {
        nums[i] = z;
        nums[s - 1] = val;
      } else {
        nums[s - 1] = val;
        nums[i] = nums[i + 1];
        nums[i + 1] = z;
      }
      t++;
      s--;
      i--;
      nums.pop();
    }
  }
  return x - t;
};
// let arr = [1, 2, 6, 8, 2, 2, 6, 9];

// let xs = removeElement(arr, 2);
// console.log(xs, arr);

var letterCombinations = function (digits) {
  if (digits === '') {
    return [];
  } else {
    let timer = [];
    let sol = [];
    let ind = 1;
    const map = new Map([
      ['2', 'abc'],
      ['3', 'def'],
      ['4', 'ghi'],
      ['5', 'jkl'],
      ['6', 'mno'],
      ['7', 'pqrs'],
      ['8', 'tuv'],
      ['9', 'wxyz'],
    ]);
    for (let i = 0; i < digits.length; i++) {
      let x = map.get(digits.charAt(i));
      timer.push([0, x.length, x]);
      ind *= x.length;
    }
    for (let j = 1; j <= ind; j++) {
      let dt = '';
      for (let i = timer.length - 1; i >= 0; i--) {
        if (timer[i][0] + 1 > timer[i][1]) {
          if (timer[i - 1] === undefined) {
            break;
          }
          timer[i][0] = 0;
          timer[i - 1][0] += 1;
          dt = timer[i][2].charAt(timer[i][0]) + dt;
        } else {
          dt = timer[i][2].charAt(timer[i][0]) + dt;
        }
      }
      timer[timer.length - 1][0] += 1;
      sol.push(dt);
    }
    return sol;
  }
};

console.log(letterCombinations('2'));
