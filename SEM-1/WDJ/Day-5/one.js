// regular function
// function show(){
//   console.log("regular function")
// }

//arrow function
// let show = () => {
//   console.log("This is Arrow function");
// };
// show();

//squre of all array elements
let arr = [6, 7, 8, 9];

let square = (arr) => {
  for (var i = 0; i < arr.length; i++) {
    arr[i] = arr[i] * arr[i];
  }
  console.log(arr);
};
square(arr);

//addition of two number 

let a = parseInt(prompt("Enter A:"));
let b = parseInt(prompt("Enter B:"));
let add = () => {
  let c = a + b;
  console.log("Sum is:", c);
};
add();

//print all even and divisible  by 7 number between 1 to 100
let even=()=>{
  for (var i = 1; i <=100; i++) {
    if(i%2==0 && i%7==0){
      console.log(i);
    }
  }
}
even();

//Wap to print largest two number