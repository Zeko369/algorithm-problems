const a = [1, 2, 1, 3, 2]

const sol1 = (arr) => {
  const seen = [];
  arr.forEach((item, index) => {
    const position = seen.indexOf(item);
    if(position === -1) {
      seen.push(item);
    } else {
      seen.splice(position, 1);
    }
  });

  return seen[0];
}

const sol2 = (arr) => {
  for (let i = 0; i < arr.length; i++) {
    let seen = false;
    for (let j = 0; j < arr.length; j++) {
      if(arr[i] === arr[j] && i !== j) {
        seen = true;
        break;
      }
    }

    if(!seen) {
      return arr[i];
    }
  }
}

// N/2+1 memory, N * LOG(N) CPU
console.log(sol1(a)); // 3

// 1 memory, N * N CPU
console.log(sol2(a)); // 3
