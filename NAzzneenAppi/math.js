//sqrt return square root of a number


// let x = Math.sqrt(9);
// console.log(x)
// //alert(x)

// document.getElementById("demo").innerHTML = x

// //sign return 1 if number positive -1 is negative ,
// // 0 if number is 0

// let y = Math.sign(787);

// document.getElementById("demo1").innerHTML = y

// // return power of a number (number, power)

// let a = Math.pow(6,2);
// document.getElementById("demo2").innerHTML = a

// //return absolute value always positive 

// let c = Math.abs(-55)
// document.getElementById("demo3").innerHTML = c

// // return roundoff value

// let d = Math.round(6.49);
// document.getElementById("demo4").innerHTML = d

// // return the above value or higher value ceil matlab uper ki value

// let e = Math.ceil(6.49);
// document.getElementById("demo5").innerHTML = e

// //floor matalb niche ki value (lower value)

// let q = Math.floor(6.49);
// document.getElementById("demo6").innerHTML = q

// // return minimum value

// let w = Math.min(2,30,7,-45,0,9);
// document.getElementById("demo7").innerHTML = w

// // return maximum value

// let s = Math.max(2,45,-3,0,85,9);
// document.getElementById("demo8").innerHTML = s

// // remove the dacemal number and give the integer value
// let z = Math.trunc(4.559);
// document.getElementById("demo9").innerHTML = z

// // random number between 0 (inclusive) and 1 (exclusive)
// let h = Math.random();  //....0 or 1 batayega  point me value dega
// h = math.random()*100; //.....1 se 100 ke bich ki value dega but point me dega
// h = math.floor(Math.random()*100)  // ..point me value nahi dega
// document.getElementById("demo10").innerHTML = h

//.....
// function randomnum(min,max){
//     return Math.floor(Math.random() * (max - min + 1) + min);
// }
// let b = randomnum(30,200)
// //console.log(b);
// document.getElementById("demo11").innerHTML = b;

// const arry = ["BMW" , 'FORD', 'KIA','TATA' , 'SUZUKI',"TOYOTA"]

// const strinarry = arry.toString();
// console.log(strinarry)

// let myarry = arry.join("*")
// console.log(myarry);

// console.log(arry[3]);
//  console.log(arry.at(3));
// console.log(arry);

// unshift and push methods of array retrun the length of the update array
 //push adds element to the end of array and unshift  adds element to the start

 //pop and shift methods return the value that is deleted
 //pop methods deletes an element from the end
 //shift method deletes an element from the start.

 //..................monday..........demo12........

//  const array1 = ["BMW" , 'FORD', 'KIA','AUDI' , 'SUZUKI',"TOYOTA"]
//  console.log(array1);
// array1.sort();  //aphabeticaly solt karega accending order
// console.log(array1);
// array1.reverse();  // aphabeticaliy revers karega as a decending order
// console.log(array1);

//  document.getElementById("demo11").innerHTML = array1;

const num = [40,500,100,340,0,7]
num.sort();
console.log(num);
document.getElementById("demo11").innerHTML = num;
//compare function (assending)
 let a = num.sort(function(a,b){return a-b});
 console.log(a);
 document.getElementById("demo11").innerHTML = a;
 //decending order

 let d = num.sort(function(a,b){return b-a});
 console.log(d);
document.getElementById("demo11").innerHTML = d;
