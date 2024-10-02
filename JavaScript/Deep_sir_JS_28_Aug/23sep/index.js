// let str ="4";
// let num =4;
// console.log(str+num);
// console.log(str===num);
// console.log(str-num);
// console.log(str+true);
// console.log(str+false);

// for(let i in str){
//     console.log(i);
// }

// for(let i of str){
//     console.log(i);
// }
let str = "l o r e m k l n a d s k l n d k s n d a k d nj  l d f n d k j ns i l d nw s k l d n a j n  d w   w l j k d n  e";

// let storestr = ""
// for(let i of str){
//     if(i !== "i"){
//         storestr = storestr + i;

//     }
// }
// console.log(storestr);

// console.log(str.replaceAll(" ", ""));
// console.log(str.length);
// console.log(str.replace(" ", ""));


let a = "";
for(let i in str){
    if(i > 4 && i < 10){
        if(str[i] !== " "){
            a= a + str[i];
        }
    }
    else{
        a = a + str[i];
    }
}
console.log(a)