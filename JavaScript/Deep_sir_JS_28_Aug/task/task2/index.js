function checkEvenOdd() {
    const number = parseInt(document.getElementById("numberInput").value);
    const resultElement = document.getElementById("result");

    if (isNaN(number)) {
        resultElement.textContent = "Please enter a valid number.";
        return;
    }

    if (number % 2 === 0) {
        resultElement.textContent = number + " is Even.";
    } else {
        resultElement.textContent = number + " is Odd.";
    }
}