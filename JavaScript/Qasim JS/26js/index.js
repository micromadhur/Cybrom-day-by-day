let number = 1
let fun = setInterval(()=>{
    if(number == 10){
        clearInterval(fun)
    }
    document.write(number++);
}
,2000)