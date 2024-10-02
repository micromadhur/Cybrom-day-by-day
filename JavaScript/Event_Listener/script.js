let mybutton = document.getElementById("btn");


mybutton.addEventListener("click", function(){
document.getElementById("demo").innerHTML = "Hello";
console.log('success');

});
mybutton.addEventListener("click", display);

function display(){
    document.getElementById("demo1").innerHTML = "world";
    console.log('success');
}

mybutton.addEventListener("mouseenter", data);
function data(){

    document.getElementById("demo2").innerHTML = Math.random();
}

mybutton.removeEventListener("click", display);