function Registration(){
    let name = document.querySelector('.name').value;
    let email = document.querySelector('.email').value;
    let mobile = document.querySelector('.mobileno').value;
    let password = document.querySelector('.password').value;
    let confirmpassword = document.querySelector('.confirm password').value;

    if(name === ""){
        window.alert("please enter your name");
        document.querySelector('.name').focus();
        return false;
    }
    else if(email === ""){
        window.alert("please enter your email");
        return false;
    }
    else if(mobile === ""){
        window.alert("please enter your mobile");
        return false;
    }
    else if(password === ""){
        window.alert("please enter your password");
        return false;
    }
    else if(confirmpassword === ""){
        window.alert("please enter your password");
        return false;
    }
    else if(!email.include(@)){
        window.alert("please include @ in your email");
        return false;
    else if (mobile ==="") {
        window.alert("please enter your moblie number");
        document.querySelector('.moblie').focus();
        return false;
    }
    else if(isNaN(mobile)){
        window.alert("moblie")
    }
    else if(!(password.match(/[1234567890]) && password.matc

}