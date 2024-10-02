// const num = [40,500,100,340,0,7]
// console.log(num);
// document.getElementById("demo10").innerHTML = num;
// //compare function (assending)
//   num.sort(function(a,b){return a-b});
//  console.log(num);
//  //document.getElementById("demo10").innerHTML = num;
//  //decending order

//  num.sort(function(a,b){return b-a});
//  console.log(num);
// //document.getElementById("demo10").innerHTML = num;


// //............string
// let x = "jonh";
// // x = "10";
// let city = "Bhopal"
// // x = 'my name is \'john doe\' and he is john deo\'s friend';

// // x = "Hello"+ " " + "wolrd" + " " + "i am" + " " + "x" + "from" + " " + city ;

// x = `Hello World Iam ${x} from ${city}`;
// let l = x.length;
// console.log(l);
// console.log(typeof x);  // data type pata karne ke liye
// document.getElementById('demo11').innerHTML = x;

// y = `Hi my name is Nazneen and i am 28 years old , from Bhopal and doing Full Stack Course marn`
// document.getElementById('demo11').innerHTML = y


//utf 16  charcode ka code batata he
let mydata = `Hello everyone how are 
you all,
understanding javascript!!!`;

let a = "hello everyone how you doing";
let newstring = a.slice(4,12);
newstring = a.slice(5);
newstring = a.slice(-10 , -5)
console.log(newstring);

console.log(a[2]);
console.log(a.at[10]);
console.log(a.charAt(8));
console.log(a.charCodeAt(3));
//a = "hello" + " " + "everyone";

let b = a.concat(" " , "everyone");

document.getElementById("demo12").innerHTML = b


function display(){
  let data = document.getElementById("head");
data.style.backgroundColor = "pink";
data.style.border = "2px solid blue";
data.style.color = "blue"

  data.innerHTML = 
  `<table>
  <tr>
  <th>Name</th>
  <th>City</th>
  <th>Contact No.</th>
  </tr>
  <tr>
  <th>Naneen</th>
  <th>Bhopal</th>
  <th>+9178542631</th>
  </tr>
  <tr>
  <th>Naneen</th>
  <th>Bhopal</th>
  <th>+9178542631</th>
  </tr>
  <tr>
  <th>Naneen</th>
  <th>Bhopal</th>
  <th>+9178542631</th>
  </tr>
  </table>`

}
