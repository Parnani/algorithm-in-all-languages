function sockMerchant(n, arr) {
  let counter = 0;
  let count = 0;

  for (let i = 0; i < arr.length; i++) {
    count = 1;
    for (let j = i + 1; j < arr.length; j++) {
      if (arr[i] == arr[j]) {
        count++;
      }
    }

    if (count % 2 == 0) {
      counter++;
    }
  }

  return counter;
}

// Input: 5, [10, 40, 20, 10, 20]
// Output: 2

// Input: 9, [10, 20, 20, 10, 10, 30, 50, 10, 20]
// Output: 3

console.log(sockMerchant(5, [10, 40, 20, 10, 20]))
console.log(sockMerchant(9, [10, 20, 20, 10, 10, 30, 50, 10, 20]))
