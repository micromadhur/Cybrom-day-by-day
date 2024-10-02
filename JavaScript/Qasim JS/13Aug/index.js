let mydata=`
Hello everyone how are you all, how you all are understanding javascript!!!
`;

let x= "hello everyone howyou doing";

let newString = x.slice(4, 12);
newString = x.slice(5);
newString = x.slice(-10, -5);
console.log(newString);

newString = x.substring(4,18);
// x= "hello" +" " + "eveyone";
console.log(x[2]);
console.log(x.at(4));
console.log(x.charAt(6));
console.log(x.charCodeAt(3));

let y= x.concat("","everyone");
document.getElementById("demo").innerHTML = y;

function display(){
    let data = document.getElementsById("demo1");
    data.style.backgroundColor = "pink";
    data.style.border = "3px soild blue";
    data.innerHTML =`
    <table>
    <tr>
    <th>Name</th>
    <th>City</th>
    <th>Contact</th>
    </tr>
    <tr>
    <td>Madhur</td>
    <td>Bhopal</td>
    <td>9752975526</td>
    </tr>
    </table>`
}