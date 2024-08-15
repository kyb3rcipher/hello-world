const inputRed = document.getElementById('red');
const inputBlue = document.getElementById('blue');
const inputGreen = document.getElementById('green');

const textRed = document.getElementById('text-red');
const textBlue = document.getElementById('text-blue');
const textGreen = document.getElementById('text-green');

var red = inputRed.value, blue = inputBlue.value, green = inputGreen.value;

function updateBackground(redColor, blueColor, greenColor) {
    const colorRGB = `rgb(${redColor}, ${blueColor}, ${greenColor})`;
    document.body.style.background = colorRGB;
}

// Set color text
textRed.innerText = red;
textBlue.innerText = blue;
textGreen.innerText = green;

// Add events listener and handers for change background when change the inputs
inputRed.addEventListener('change', (event) => {
    red = event.target.value;
    textRed.innerText = red;
    updateBackground(red, blue, green);
});
inputBlue.addEventListener('change', (event) => {
    blue = event.target.value;
    textBlue.innerText = blue;
    updateBackground(red, blue, green);
});
inputGreen.addEventListener('change', (event) => {
    green = event.target.value;
    textGreen.innerText = green;
    updateBackground(red, blue, green);
});