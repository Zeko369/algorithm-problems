const groupAnagramWords = (arr) => {
  const grouped_by_len = {};
  arr
    .map((item) => item.length)
    .forEach((len, index) => {
      if (index !== 0) {
        grouped_by_len[len].push(arr[index]);
      } else {
        grouped_by_len[len] = [arr[index]];
      }
    });

  const out = [];

  Object.keys(grouped_by_len).forEach((len) => {
    const words = grouped_by_len[len];

    if (words.length < 2) {
      out = [...out, words];
      return;
    }

    const sorted = words
      .map((item) =>
        item
          .split("")
          .sort()
          .join("")
      )
      .sort();

    console.log(sorted);

    let tmp = [];
    sorted.forEach((item) => {
      if (tmp.length === 0) {
        tmp.push(item);
      } else {
        if (tmp[tmp.length - 1] === item) {
          tmp.push(item);
        } else {
          out.push(tmp);
          tmp = [];
        }
      }
    });

    out.push(tmp);

    // for (let i = 0; i < sorted.length; i++) {
    //   if (tmp.length === 0) {
    //     tmp.push(sorted[i]);
    //     continue;
    //   }

    //   if (tmp[tmp.length - 1] === sorted[i]) {
    //     tmp.push(sorted[i]);
    //   } else {
    //     out.push(tmp);
    //     tmp = [];
    //   }
    // }

    out.push(tmp);
  });

  return out;
};

console.log(groupAnagramWords(["abc", "bcd", "cba", "cbd", "efg"]));
