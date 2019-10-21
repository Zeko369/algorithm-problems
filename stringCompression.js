const s = "aabccc"

const out = [s[0]]

for(let i = 1; i < s.length; i++) {
  if(s[i] == out[out.length - 1][0]) {        
    out[out.length - 1] += s[i];
  } else {
    out.push(s[i]);
  }
}

console.log(out)

const foo = out.map((item) => `${item.length == 1 ? '' : item.length}${item[0]}`).join('')

console.log(foo);
