/*1.sum of all natural number

sum of 1 to 5 =15
*/
function sumOfNaturalNumbers(num) {
  //   let sum = 0;
  //   for (let i = 1; i <= num; i++) {
  //     sum += i;
  //   }
  //   return sum;
  return (num * (num + 1)) / 2;
}
console.log(sumOfNaturalNumbers(5));

/* 2.sum of digits of a number

sum of digits 14369=23
*/
function sumOfDigitsOfNumber(num) {
  let sum = 0;
  while (num > 0) {
    sum += num % 10;
    num = Math.floor(num / 10);
  }
  return sum;
}
console.log(sumOfDigitsOfNumber(14369));

/*
3.counting no of digits of a number

number 475869=6
*/
function countDigits(num) {
  num = Math.abs(num);
  let count = 0;
  do {
    count++;
    num = Math.floor(num / 10);
  } while (num > 0);
  return count;
}
console.log(countDigits(475869));

/*
4.is number palindrome

number 85358 = true; 
*/
function palindromeCheck(num) {
  let copyNum = num;
  let reverseNum = 0;
  while (copyNum > 0) {
    let lastDigit = copyNum % 10;
    reverseNum = reverseNum * 10 + lastDigit;
    copyNum = Math.floor(copyNum / 10);
  }
  return num === reverseNum;
}
console.log(palindromeCheck(85358));

/*
5.Finding fibonacci number
0 1 1 2 3 5 8

f(6) should return 8
*/
function fibonacciNum(num) {
  if (num < 2) {
    return num;
  }

  let prev = 0,
    curr = 1,
    next;
  for (let i = 2; i <= num; i++) {
    next = prev + curr;
    prev = curr;
    curr = next;
  }

  return next;
}
console.log(fibonacciNum(6));

/*
6.Find the missing number in the array

[0,1,3,4,5] should return 2
*/
function missingNumber(nums) {
  let sum = 0,
    len = nums.length;
  for (let i = 0; i < len; i++) {
    sum += nums[i];
  }
  return (len * (len + 1)) / 2 - sum;
}
console.log(missingNumber([0, 1, 2, 4, 5, 6, 7]));
