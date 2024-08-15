const buttonStart = document.querySelector('#button-start-pause');
const buttonReset = document.querySelector('.container-buttons').childNodes[3];
const chrometer = document.getElementById('chrometer');

let [hours, minutes, seconds] = [0, 0, 0];
let timeIntervale;
let chrometerStatus = 'paused';

function updateChrometer() {
    seconds++;

    if (seconds / 60 === 1) {
        seconds = 0;
        minutes++;

        if (minutes / 60 === 1) {
            minutes = 0;
            hours++;
        }
    }

    const secondsWithFormat = setFormat(seconds);
    const minutesWithFormat = setFormat(minutes);
    const hoursWithFormat = setFormat(hours);

    chrometer.innerText = `${hoursWithFormat}:${minutesWithFormat}:${secondsWithFormat}`;
}

function setFormat(unitOfTime) {
    return unitOfTime < 10 ? '0' + unitOfTime : unitOfTime;
}

function resetCounter() {
    window.clearInterval(timeIntervale);
    buttonStart.classList.remove('pause');
    buttonStart.innerHTML = '<i class="bi bi-play-fill"></i>';
    buttonStart.classList.add('start');
    chrometerStatus = 'paused'
}

buttonStart.addEventListener('click', function() {
    if (chrometerStatus === 'paused') {
        timeIntervale = window.setInterval(updateChrometer, 1000);
        event.target.parentElement.innerHTML = '<i class="bi bi-pause-fill"></i>';
        buttonStart.classList.add('pause');
        chrometerStatus = 'active';
    } else {
        resetCounter();
    }
});

buttonReset.addEventListener('click', function(){
    [hours, minutes, seconds] = [0, 0, 0];
    chrometer.innerText = '00:00:00';
    
    if (chrometerStatus === 'active') { resetCounter(); }
});