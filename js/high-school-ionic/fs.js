const fs = require('fs');

/*
const first = fs.readFileSync('./data/first.txt', 'utf-8');
const second = fs.readFileSync('./data/second.txt').toString();

console.log(first);
console.log(second);

let thirdContent = 'This is a third file';
fs.writeFileSync('./data/third.txt', thirdContent);
const fourth = './data/fourth.txt', fourthContent = 'JavaScript';
fs.writeFileSync(fourth, fourthContent);

fs.writeFileSync('./data/five.txt', 'Text');
fs.writeFileSync('./data/five.txt', 'Overwrite');
// If file exists node overwrite the file

// With flag a (append) not overwrite the file append the text in existing file
fs.writeFileSync('./data/six.txt', 'NotOverwrite ', {
    flag: 'a'
});*/

// Callback
fs.readFile('./data/first.txt', 'utf-8', function (error, data) {
    if (error) {
        console.error(error);
        return;
    }

    console.log(data);


    fs.readFile('./data/second.txt', 'utf-8', (error, data) => {
        if (error) {
            console.error(error);
            return;
        }

        console.log(data);

        // Callback hell
        fs.writeFile('./data/async.txt', 'This file is from fs', (error, data) => {
            if (error) {
                console.error(error);
                return;
            }
    
            // Return null cuz not have data
            console.log(data);
        })
    });
});