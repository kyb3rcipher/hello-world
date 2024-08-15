const button = document.querySelector('button');
const color = document.getElementById('color');

function randomHexColor() {
    let digits = '0123456789ABCDEF';
    let colorHex = '#';

    for (let i = 0; i < 6; i++) {
        let randomIndex = Math.floor(Math.random() * 16);
        colorHex += digits[randomIndex];
    }

    return colorHex;
}

button.addEventListener('click', () => {
    // Update text color
    const newColor = randomHexColor();
    color.innerText = newColor;
    
    // Update color
    let body = document.getElementById('container').parentNode; // or document.body
    body.style.backgroundColor = newColor;
});