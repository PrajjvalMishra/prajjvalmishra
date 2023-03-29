let input1=document.querySelector(".input1");
let input2=document.querySelector(".input2");
let input3=document.querySelector(".input3");

let text1=document.querySelector(".text1");
let text2=document.querySelector(".text2");
let text3=document.querySelector(".text3");

input1.addEventListener("click",()=>{
    console.log("btn is clicked");
      text1.style.display="flex";
      text2.style.display="none";
      text3.style.display="none";

});

input2.addEventListener("click",()=>{
    console.log("btn is clicked");
      text2.style.display="flex";
      text1.style.display="none";
      text3.style.display="none";
});

input3.addEventListener("click",()=>{
    console.log("btn is clicked");
      text3.style.display="flex";
      text1.style.display="none";
      text2.style.display="none";
});