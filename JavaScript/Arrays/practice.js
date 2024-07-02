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
