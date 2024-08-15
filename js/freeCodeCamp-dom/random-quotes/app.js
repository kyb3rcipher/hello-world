let buttonElement = document.getElementById('button-change-quote');
let quoteElement = document.getElementById('quote');
let authorElement = document.getElementById('author');

function generateRandom(min, max) {
    return Math.floor(Math.random() * (max - min) + min);
}

function changeQuote() {
    let indexRandom = generateRandom(0, quotes.length);
    
    quoteElement.innerText = `"${quotes[indexRandom].text}"`;
    authorElement.innerText = quotes[indexRandom].author;
}

// Start with initial quote
changeQuote();

buttonElement.addEventListener('click', changeQuote);