// max min
let mark = [20, 54, 76, 77, 45, 100];
console.log(mark);

let max = mark[0];
let min = mark[0];

for (mark of mark) {
  if (mark > max) {
    max = mark;
  }
  if (mark < min) {
    min = mark;
  }
}
console.log("Max mark is " + max);
console.log("Min mark is " + min);

//string even odd

let str = prompt("Enter string");
if (str.length % 2 == 0) {
  console.log(str.slice(-4));
} else {
  console.log(str.toUpperCase());
}


