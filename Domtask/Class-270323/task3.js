let add=document.querySelector(".add");
let subs=document.querySelector(".sub");
let reset=document.querySelector(".reset")
let counter=0;

let counterValue=document.querySelector("#counter-value");

add.addEventListener("click",()=>{
    counter++;
    counterValue.innerHTML=counter;
});

subs.addEventListener("click",()=>{
    counter--;
    counterValue.innerHTML=counter;
});

reset.addEventListener("click", ()=>{
    counter=0;
    counterValue.innerHTML=counter;

});