console.log("----------Arithmaric oprator");
var a = 10;
var b = 20;
console.log(a + b);
console.log(a - b);
console.log(a * b);
console.log(a / b);
console.log(a % b);

console.log("----------Assignment oprator");
var a = 10;
var b = 20;
console.log((a += b));
console.log((a -= b));
console.log((a *= b));
console.log((a /= b));

console.log("----------Comparision oprator");
var a = 10;
var b = 20;
console.log(a > b);
console.log(a < b);
console.log(a >= b);
console.log(a <= b);
console.log(a == b);
console.log(a != b);
// console.log(a=>b);
// console.log(a=<b);

console.log("----------Logical oprator");
let age = 18;
let citizen = "india";
if (age == 18 && citizen == "india") {
  console.log("U can vote");
} else {
  console.log("U cant vote");
}

let character = "a";
if (
  character == "a" ||
  character == "e" ||
  character == "i" ||
  character == "o" ||
  character == "u"
) {
  console.log("Vowel");
} else {
  console.log("Not vowel");
}

console.log("----------Practice program");

let str = prompt("Enter Name");
for (let i = 0; i < str.length; i++) {
  if (str.length %2==0 && str.charAt(1=='a')) {
  console.log("Name is proper");
  }
  else{
  console.log("Name is not proper");

  }
}

let year = prompt("Enter Year");

if(year==2000){
  console.log("Cuentury");

}
if(year%4==0){
  console.log("Leap year");
}else{
  console.log("Not Leap year");

}

