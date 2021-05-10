// Requiring fs module in which
// writeFile function is defined.
const ab = require('fs')
  
// Data which will write in a file.
let data = "Learning how to write in a file."
  
// Write data in 'Output.txt' .
ab.writeFile('../Output.txt', data, (err) => {
      
    // In case of a error throw err.
    if (err) throw err;
})