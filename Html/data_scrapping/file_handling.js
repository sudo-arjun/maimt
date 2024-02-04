const fs = require("fs");

// fs.open("fs.txt","w", (err)=>{
//     console.log(err);
//     if(err){
//         console.log(err);
//     }
// })
let ob={
    name:"Chetan Prakash",
    roll:223100
}
async function write()
{
    await fs.writeFile("fs.txt","hello str",(err)=>{
    // console.log(err);
    if(err){
        console.log(err);
    }
})
}
write();
async function write2()
{
    fs.writeFile("fs.txt","This is second string",(err)=>{
        // console.log(err);
        if(err){
            console.log(err);
        }
    })
    
}
write2();

// const fs = require('fs');

// // Specify the file path
// const filePath = 'example.txt';

// // Data to be written to the file
// const content = 'Hello, Node.js!';

// // Write to the file
// fs.writeFile(filePath, content, 'utf8', (err) => {
//     if (err) {
//         console.error(err);
//         return;
//     }
//     console.log('File has been written.');
// });
