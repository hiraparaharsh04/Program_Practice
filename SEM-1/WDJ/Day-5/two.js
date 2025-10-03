// Array methods

//print marks above 80 using filter method
console.log("-----Filter method");
let marks = [78, 89, 56, 91, 83, 85, 99];
let result = marks.filter((mark) => {
  return mark > 80;
});
console.log(result);

// print cube of each element using map method
console.log("-----map method");
let arr = [1, 2, 3, 4, 5, 5, 6];
let output = arr.map((val) => {
  return val * val * val;
});
console.log(output);

//
console.log("-----reduce method");
let mark = [67, 87, 90, 94, 74];
let total = mark.reduce((res, current) => {
  return res + current;
});
console.log(total);

//practice program

//company decided to give 10% increment of salary print updated salary

let salary = [20000, 35000, 82000, 71000, 53000];
let increment = salary.map((i) => {
  return i + (i * 10) / 100;
});
console.log(increment);

// cgpa=[7.8,9.4,8.3,6.7,8.4,6.8];
// print cgpa above 7.2
let cgpa = [7.8, 9.4, 8.3, 6.7, 8.4, 6.8];
let up = cgpa.filter((i) => {
  return i > 7.2;
});
console.log(up);

// age=[65,78,90,34,21,69];
// print only even age
let age = [65, 78, 90, 34, 21, 69];
let newage = age.filter((a) => {
  return a % 2 == 0;
});
console.log(newage);

// km_per_month=[89,65,47,81,94,55];
// find avg of 6 month
let km_per_month = [89, 65, 47, 81, 94, 55];
let totals = km_per_month.reduce((ac, i, index) => {
  if (index == 5) {
    return (ac + i) / 6;
  }
  return ac + i;
});
console.log(totals);
