function checkMatch() {
    const input1 = document.getElementById("input1").value;
    const input2 = document.getElementById("input2").value;
    const resultElement = document.getElementById("result");

    if (input1 === input2) {
        resultElement.textContent = "Inputs match!";
    } else {
        alert("Inputs do not match!");
    }
}