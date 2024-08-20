const EvetEmitter = require('events');

const customEmitter = new EvetEmitter();

// First create event and later
customEmitter.on('response', (data, secondData) => {
    console.log('Recived');
    console.log(data);
    console.log('Second Recived');
    console.log(secondData);
});

//... and later launch the event
customEmitter.emit('response', ['Hello', 'Bye', 'World'], 'Save');