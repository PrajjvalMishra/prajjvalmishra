let head1=document.querySelector(".head1");
let head2=document.querySelector(".head2");
let head3=document.querySelector(".head3");
let head4=document.querySelector(".head4");

let text1=document.querySelector(".text1");
let text2=document.querySelector(".text2");
let text3=document.querySelector(".text3");
let text4=document.querySelector(".text4");

let cross=document.querySelector("#cross");
let add1=document.querySelector("#add1");
let add2=document.querySelector("#add2");
let add3=document.querySelector("#add3");

head1.addEventListener("click",()=>{
  text1.style.display="flex";
  cross.innerHTML="x"
  head1.addEventListener("click",()=>{
    text1.style.display="none";
    cross.innerHTML="+"
  })
});
head2.addEventListener("click",()=>{
    text2.style.display="flex";
    cross.innerHTML="x"
    head2.addEventListener("click",()=>{
      text1.style.display="none";
      cross.innerHTML="+"
      })
  })
  head3.addEventListener("click",()=>{
    text3.style.display="flex";
    cross.innerHTML="x"
  head1.addEventListener("click",()=>{
    text2.style.display="none";
    cross.innerHTML="+"
      })
  })
  head4.addEventListener("click",()=>{
    text4.style.display="flex";
    cross.innerHTML="x"
  head1.addEventListener("click",()=>{
    text1.style.display="none";
    cross.innerHTML="+"
      })
  })
