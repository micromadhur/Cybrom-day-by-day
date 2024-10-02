let arr = [2,4,9,10,2];
console.log(arr);
arr.pop(2);
console.log(arr);
arr.push(80);
console.log(arr);
arr.shift(0);
console.log(arr);
console.log(arr);
arr.unshift(30);
console.log(arr);
delete arr[2];
console.log(arr);
arr.splice(arr.length-1,1);
console.log(arr);
arr.splice(arr.length,0,89,70,56,45);
console.log(arr);
arr.splice(0,1);
console.log(arr);//shift
arr.splice(0,0,90)
console.log(arr);//unshift
arr.splice(3,0,"heeelo","hii","welcome");
console.log(arr);
arr.splice(6,1,"delete element");
console.log(arr);

arr.sort();
console.log(arr);

let arr1 = [6,7,8,9,5,4,8];
arr1.sort(function(a,b){return a-b});
console.log(arr1);
arr1.sort(function(a,b){return b-a});
console.log(arr1);

let alp = ["g","tr","yyy","qqq"];
alp.sort();
console.log(alp);

alp.reverse();
console.log(alp);

let sumofarray = arr.reduce(function(a,b){return a+b})
console.log(sumofarray);