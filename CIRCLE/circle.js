const xSize = 50;
const ySize = 50;
const R = 10;
let output = "";
for(let x = 0; x < xSize; x ++) {
    for(let y = 0; y < ySize;y ++) {
        if(Math.sqrt(Math.pow(x - xSize / 2, 2) + Math.pow(y - ySize / 2, 2)) <= R)
            output += "**";
        else
            output += "  ";
        }
    output += "\n";
}

console.log(output);
