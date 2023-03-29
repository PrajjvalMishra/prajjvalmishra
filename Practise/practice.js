let para1=document.getElementById("para1");
console.log(para1);

let para1btn=document.getElementById("para1btn");
console.log(para1btn);

let initialValue=para1.textContent;

para1btn.addEventListener("click",()=>{
    console.log("btn is clicked");
    para1.innerHTML=`${initialValue} Mishra!`;
    para1btn.innerHTML=`Clicked`;
});

// task 2 JS

let taskClick=document.getElementsByClassName("taskClick");
console.log(taskClick);

let task2btn=document.getElementById("para2btn");
console.log(task2btn);

task2btn.addEventListener("click",()=>{
  console.log("btn is clicked");
  taskClick[2].innerHTML=`kaise ho aap`;
  task2btn.innerHTML=`clicked`;
})

////task 3

let text3=document.getElementById("inputText3");
console.log(text3);

let btn3=document.getElementById("para3btn");
console.log(btn3);

let list=[];

btn3.addEventListener("click", ()=>{
    console.log("btn is clicked");
    list.push({
        text: text3.value ,
    })
    text3.value="";
    console.log(list);
    for(let i=0;i<list.length;i++){
        console.log(list[i].text);
    }
})

/////task4
let text4=document.getElementById("inputText4");
console.log(text4);

let para4btn=document.getElementById("para4btn");
console.log(para4btn);

let todolist =document.querySelector(".todo");
console.log(todolist);

let list4=[];

para4btn.addEventListener("click",()=>{
  console.log("btn is clicked");
  list4.push({
    text:text4.value ,
  });

  let todo=document.createElement("li");
  todo.textContent=text4.value;
  todolist.appendChild(todo);


  console.log(list4);
  for(let i=0;i<list4.length;i++){
    console.log(list4[i].text);
}
});

/////task5
let square=document.querySelector(".square");
console.log(square);

// square.addEventListener("click", ()=>{
//     console.log("btn is clicked");
//     square.style.borderRadius="50%";
// });

let isSquare=true;

square.addEventListener("click", ()=>{
    if(isSquare){
        square.style.borderRadius="50%";
        isSquare=false;
    }
    else{
        square.style.borderRadius="0%";
        isSquare=true;
    }
});

let fruits=["mango","apple","orange"];

let fruitList= document.getElementById("fruitsList");

fruits.forEach((fruit)=>{
    let fruitEle=document.createElement("li");
    fruitEle.textContent=fruit;
    fruitList.appendChild(fruitEle);
})
