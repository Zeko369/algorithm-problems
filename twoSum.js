// can you add 2 numbers to make the sum?
const twoSum = (arr, sum) => {
  const complements = [];

  for (let i = 0; i < arr.length; i++) {
    const item = arr[i];
    if (complements.indexOf(item) !== -1) {
      return true;
    }

    complements.push(sum - item);
  }
  return false;
}

console.log(twoSum([4,7,1,-3,2], 5))  // true
console.log(twoSum([4,7,1,-3,2], 10)) // false
