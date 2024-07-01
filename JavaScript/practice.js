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
