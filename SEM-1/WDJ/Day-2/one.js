// loop in js
//for loop
console.log("---------------------for loop");
for (let i = 0; i < 10; i++) {
  console.log(i);
}

console.log("---------------------for loop even number");
for (let i = 0; i < 10; i = i + 2) {
  console.log(i);
}

console.log("---------------------for in loop");
var arr=[1,2,3,4,5]
for(i in arr1){
    console.log(i);
}
console.log("--------for in loop with index");
for(i in arr1){
    console.log([i]);
}

console.log("---------------------for each loop");
console.log("---------------------while loop");
var i=0;
while (i<5) {
    i++;
    console.log(i);
}
console.log("---------------------do while loop");
var i=0;
do {
    i++;
    console.log(i);
} while (i<7);

console.log("---------------------Array");
let arr=[1,2,3,4,5]
console.log(arr);
// for(i=0;i<arr.length;i++)
// console.log(arr[i]);

//push
console.log("---------------------push");
arr.push(6)
console.log(arr);

//pop
console.log("---------------------pop");
arr.pop()
console.log(arr);

//shitft
console.log("---------------------shitft");
arr.shift()
console.log(arr);

//unshitft
console.log("---------------------unshitft");
arr.unshift(7)
console.log(arr);

//concate
console.log("---------------------concate");
let arr2=[55,66,77,88]
console.log(arr.concat(arr2));

//slice
console.log("---------------------slice");
console.log(arr.slice(2,6));

//splice
console.log("---------------------splice");
console.log(arr.splice(2,6));