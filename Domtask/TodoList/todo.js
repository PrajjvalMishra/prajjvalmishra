let inputText=document.getElementById("input_text");
console.log(inputText);

let addBtn=document.querySelector("#btn");
console.log(addBtn);

let taskadd=document.querySelector(".taskadd");

let list4=[];

addBtn.addEventListener("click",()=>{
    console.log("btn is clicked");
    list4.push({
      text:inputText.value ,
    });
    
    let todo=document.createElement("li");
    todo.textContent=inputText.value;
    taskadd.appendChild(todo);

});

