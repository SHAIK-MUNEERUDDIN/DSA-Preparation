/*
1.Check if an element is present in the array or not

fn([1,2,3,4,5],2) should return true
*/
const checkElement = (arr, target) => {
  for (let elem of arr) {
    if (elem === target) {
      return true;
    }
  }
  return false;
};
console.log(checkElement([1, 2, 3, 4, 5], 2));

/*
2.check if an element is present in the array and if it is present then return it's index

fn([4,5,6,7],6) should return 2
*/
const checkElementIndex = (arr, target) => {
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] === target) {
      return i;
    }
  }
  return -1;
};
console.log(checkElementIndex([4, 5, 6, 7], 6));

//Shallow copy of Array

function learnShallowCopy() {
  let arr1 = [10, 20, 30, 40];
  let arr2 = arr1;
  console.log(arr1, arr2); //[ [ 10, 20, 30, 40 ], [ 10, 20, 30, 40 ] ]

  arr2.splice(2, 2);
  console.log(arr1, arr2); //[ [ 10, 20 ], [ 10, 20 ] ]
}
learnShallowCopy();

//Deep copy of Array
function learnDeepCopy() {
  let arr1 = [5, 10, 15, 20, "Salman", true];
  let arr2 = [...arr1];
  let arr3 = Array.from(arr1);
  let arr4 = arr1.concat();
  console.log(arr1, arr2);
  arr2.splice(4, 2);
  console.log(arr2, arr1);
  arr3.splice(4, 2);
  console.log(arr3, arr1);
  arr4.splice(4, 2);
  console.log(arr4, arr1);
}
learnDeepCopy();

//Adding array
function addArrays(arr1, arr2) {
  //   return arr1.concat(arr2);
  return [...arr1, ...arr2];
}
console.log(addArrays([1, 2, 3, 4], [5, 6, 7, 8]));

/*
3.Check if two array are equal.
*/
const compareArrays = (arr1, arr2) => {
  //   if (arr1.length !== arr2.length) {
  //     return false;
  //   }

  //   for (let i = 0; i < arr1.length; i++) {
  //     if (arr1[i] !== arr2[i]) {
  //       return false;
  //     }
  //   }
  //   return true;

  //   return (
  //     arr1.length === arr2.length && arr1.every((elem, i) => elem === arr2[i])
  //   );

  return (
    arr1.length === arr2.length && !arr1.some((elem, i) => elem !== arr2[i])
  );
};
console.log(compareArrays([2, 4, 6, 8], [2, 4, 6, 8]));

//Using Map,Filter,Reduce,Find on arrays
{
  let arr = [5, 4, 3, 6, 7, 25, 15];

  console.log(arr.map((elem, i) => elem * elem)); //returns an array containing square of all elements
  console.log(arr.filter((elem, i) => elem % 2 == 0)); //returns even numbers in the array
  console.log(arr.reduce((acc, elem) => acc + elem, 0)); //returns sum of elements of array
  console.log(arr.find((elem, i) => elem > 10)); // returns the first element the fullfils the condition
  console.log([1, 2, [3, [4, 5]]].flat(2));
}

var countOdds = function (low, high) {
  let count = 0;
  for (let i = low; i <= high; i++) {
    if (i % 2 !== 0) {
      count++;
    }
  }
  return count;
};
console.log(countOdds(1, 10));
