const text = document.querySelector('.text');
const str = "WE ARE DEVELOPER";
let i = 0;
const typeWritereffect = () => {
    if (i < str.length) {
        text.textContent += str.charAt(i);
        i++;
        setTimeout(typeWritere)
    }
}
const run = ()=> {
    let set = document.querySelector('MADHUR')
}

typeWriter();
