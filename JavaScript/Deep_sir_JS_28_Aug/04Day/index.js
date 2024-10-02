// let number = window.prompt("Enter number 1");
// let number2 = window.prompt("Enter number 2");
// // window.alert(number+number2)
// //     let sum = number+number2;
// window.alert(typeof(number));
// window.alert(typeof(number2));

//     let sum = parseInt(number) + parseInt(number2);
//     window.alert(sum);
// // console.log(sum);
// window.confirm("Done bro : ")


// let anwser = window.confirm("Do you want to log out");

// if (anwser) {
//     window.alert("log out");
// } else {
//     window.alert("cancel");
// }

let number = parseInt(prompt("Enter the number1"));
let number2 = parseInt(prompt("Enter the number2"));
let number3 = parseInt(prompt("Enter the number3"));

function findGreatest(number, number2, numbewr3) {
    if (number > number2 && number > number3) {
        return number;
    } else if (number2 > number && number2 > number3) {
        return number2;
    } else {
        return number3;
    }
window.alert(findGreatest)
}