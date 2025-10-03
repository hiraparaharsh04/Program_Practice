//Function
//simple functiom without parametter
function displays(){
    console.log("Hello");
}
// displays(2,3,4,5,6,7);

// var a;
// var b;
// function displays(a,b){
//   console.log("Hello");
// }
// displays();

function display(){
  console.log("1st Hello");
}
function display(a,b){
  console.log("2nd Hello");
}
display()

function displays(a,b){
  console.log(a+b)
}
displays(3,3);

function displays(a,b){
  console.log(a+b)
}
displays("harsh",3,3);



console.log("-------------Arrow function");
// //Aerrow function
let display1=() =>{
  console.log("Hello from arrow");
}
display1();
