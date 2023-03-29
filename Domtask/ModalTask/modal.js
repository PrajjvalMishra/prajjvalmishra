let input=document.querySelector(".input");

let text=document.querySelector(".text");

let close=document.querySelector(".close");

input.addEventListener("click",()=>{
    console.log("btn is clicked");
      text.style.display="flex";
});

close.addEventListener("click",()=>{
    console.log("btn is clicked");
    text.style.display="none";
})