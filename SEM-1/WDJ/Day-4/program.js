// take a number and find factorial.

// var number = prompt("Enter number");

// function fact(number) {
//   var fact = 1;
//   for (var i = number; i > 0; i--) {
//     fact *= i;
//   }
//   return fact;
// }
// console.log(fact(number));

//take a number and check its prime or not

var number = prompt("Enter number");

function prime(number) {
  var flag = 0;
  for (var i = 0; i < number; i++) {
    if (number % 2 == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 0) {
    console.log("Number is prime");
  } else {
    console.log("Number is not prime");
  }
}
prime(number);

//print all odd non prime number betwwn 1to100
//make a function to print multiple of 7 till 140
