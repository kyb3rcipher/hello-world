const toppings = document.getElementsByTagName('li');

for (const topping of toppings) {
    topping.addEventListener('click', (event) => {
        const message = 'Clicked on: ' + event.target.innerText;
        //console.log(message);
        alert(message);
    });
}