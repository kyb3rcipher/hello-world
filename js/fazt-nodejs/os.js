const os = require('os');

console.log(os.userInfo());
console.log(os.uptime());
console.log(os.platform());
console.log(os.totalmem());
console.log(os.freemem());

console.table({
    os: os.platform(),
    release: os.release(),
    totalMemory: os.totalmem(),
    freeMemory: os.freemem(),
});