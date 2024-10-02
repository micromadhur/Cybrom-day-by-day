let timer;
let isRunning = false;
let [hours, minutes, seconds] = [0, 0, 0];

const display = document.getElementById('display');
const startButton = document.getElementById('start');
const stopButton = document.getElementById('stop');
const resetButton = document.getElementById('reset');

startButton.addEventListener('click', () => {
    if (!isRunning) {
        isRunning = true;
        timer = setInterval(updateTime, 1000);
    }
});

stopButton.addEventListener('click', () => {
    isRunning = false;
    clearInterval(timer);
});

resetButton.addEventListener('click', () => {
    isRunning = false;
    clearInterval(timer);
    [hours, minutes, seconds] = [0, 0, 0];
    display.textContent = '00:00:00';
});

function updateTime() {
    seconds++;
    if (seconds === 60) {
        seconds = 0;
        minutes++;
        if (minutes === 60) {
            minutes = 0;
            hours++;
        }
    }
    display.textContent = `${pad(hours)}:${pad(minutes)}:${pad(seconds)}`;
}

function pad(unit) {
    return unit.toString().padStart(2, '0');
}
