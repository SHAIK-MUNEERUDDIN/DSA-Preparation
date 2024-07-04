{
  let arr = [1, 2, 10, 21, -9];
  let str = "muneer";

  console.log(arr.sort()); //The default sort() sorts elements in dictionary order like sequence
  console.log(arr.sort((a, b) => a - b)); //ascending order
  console.log(arr.sort((a, b) => b - a)); //descending order
  console.log(str.split("").sort().join(""));
}
