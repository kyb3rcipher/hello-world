const http = require('http');
const fs = require('fs');

const server = http.createServer((request, response) => {

    switch (request.url) {
        case '/':
            response.write('Home (/)');
            break;
        
        case '/jbalvin':
            response.write(`
                <h1>JBalvin</h1>
                <p>Aclarar</p>
                <a href='/'>/</a>
            `);
            break;
        
        case '/jbalvin/bajoybateria':
            response.write('Adicto');
            break;
            
        case '/about':
            response.write('<h1>About</h1>')
            break;
        
        case '/html':
            let file = fs.readFileSync('./file.html');
            response.write(file);
            break;
        
        default:
            response.write('Not found');
            break;
    }

    response.end();
});


server.listen(3000);
console.log('Server listening in 3000 port');