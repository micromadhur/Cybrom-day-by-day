const arr=["BmW","Macdes","Maruri","Nexon"];
console.log(arr);
arr.sort();
console.log(arr);
arr.reverse();
console.log(arr);
document.getElementById('demo').innerHTML=arr

const number=[1,2,3,4,5];
number.sort();
console.log(number);
number.sort(function(a,b){return a-b})
console.log(number);

const num2=[2,5,31,4];
num2.sort(function(a-b){return b-a})
console.log(num2)

document.getElementById('demo').innerHTML=num2;
n 