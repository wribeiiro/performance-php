const startTime = process.hrtime.bigint();

let test = 0;
const total = 10_000_000;

let i = 0;

while (i < total) {
    test = i;
    i++;
}

const endTime = process.hrtime.bigint();
const duration = Number(endTime - startTime) / 1e9;

console.log(duration);
