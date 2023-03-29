let booklist= document.querySelector(".booklist");
console.log(booklist);

let books = [
{
    title:"The Design of EveryDay things",
    author:"Don Mishra",
    alreadyRead:false,
},
{
    title:"Jab tak hai jaan",
    author:"Yash chopra",
    alreadyRead:true,
},
{
    title:"Jab tak hai jaan2 ",
    author:"Yash chopra junior",
    alreadyRead:true,
},
];

books.forEach((element) => {
let text= `Title= ${element.title} author of this book is ${element.author} -${element.alreadyRead}` ; 
let library = document.createElement("p");
library.textContent = text;
booklist.appendChild(library);
});

