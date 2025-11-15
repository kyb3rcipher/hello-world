const {writeFile} = require('fs/promises');

const createBigFile = async () => {
    await writeFile('./data/bigfile.txt', 'Hello World'.repeat(10000));
};
createBigFile();

/*const {createReadStream} = require('fs');

const stream = createReadStream('./data/bigfile.txt', 'utf-8');
stream.on('data', function (chunk) {
    console.log(chunk);
});

stream.on('end', () => {
    console.log('Finished');
});

stream.on('error', (error) => {
    console.log('Error:');
    console.log(error);
});*/