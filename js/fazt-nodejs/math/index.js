function sum(number1, number2) {
    return number1 + number2;
}

function substract(number1, number2) {
    return number1 - number2;
}


export function multiply(number1, number2) {
    return number1 * number2;
}

function divide(number1, number2) {
    return number1 / number2;
}

//module.exports = {sum, substract, multiply, divide};
// If not specific what export default export:
export default {
    sum,
    substract
}