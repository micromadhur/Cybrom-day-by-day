let str = "01234568789qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_+";

let store = "";

for(let i =0;i<6;i++){
    let randomval = Math.random();
    let aftermultiply = str.length*randomval;
    let flooredval = Math.floor(aftermultiply);
    let output = str.charAt(flooredval);
    store = store + output;
}
console.log(store)