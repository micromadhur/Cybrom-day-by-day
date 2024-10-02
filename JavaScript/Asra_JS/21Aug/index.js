// localStorage.setItem(key,value)

localStorage.setItem("name", "madhur");
localStorage.setItem("password","Deadline ")


localStorage.removeItem("name1");
localStorage.clear();
//localStorage.getItem(key)
let Name = localStorage.getItem("name");

console.log(Name);

let password = localStorage.getItem("password");
console.log(password);

document.getElementById("demo").innerHTML = `welcome ${Name}`;

