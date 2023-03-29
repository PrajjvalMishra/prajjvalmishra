let inputText=document.querySelector("#input");

let info=document.querySelector(".info");

let form=document.querySelector(".form");

let totaltask=document.querySelector("#totaltask");
let counter=0;

form.addEventListener("submit",  (e) => {
    e.preventDefault();
    console.log("btn is clicked");
    counter++;

    let task=inputText.value;
    
    if (task===''){
        alert("Field is empty");
        return;
    }
    
    let parentdiv=document.createElement("div");
    parentdiv.classList.add("parentd");
    info.appendChild(parentdiv);

    parentdiv.style.display="flex";

    let todoDiv=document.createElement("div");
    todoDiv.classList.add("todo");
    parentdiv.appendChild(todoDiv);

    let todoinput=document.createElement("input");
    todoinput.classList.add("todoinput");
    todoinput.type="text";
    todoinput.value=task;
    todoinput.setAttribute("readonly","readonly");
    todoDiv.appendChild(todoinput);

    let todoActions=document.createElement("actiondiv");
    todoActions.classList.add("twobutton");
    parentdiv.appendChild(todoActions);

    let todoEdit=document.createElement("button");
    todoEdit.classList.add("edit");
    todoEdit.innerHTML="Edit";
    todoActions.appendChild(todoEdit);

    let todoDelete=document.createElement("button");
    todoDelete.classList.add("delete");
    todoDelete.innerHTML="Delete";
    todoActions.appendChild(todoDelete);
    
    todoEdit.addEventListener("click", ()=>{
         if(todoEdit.innerHTML=="save"){
            todoinput.setAttribute("readonly","readonly");
            todoEdit.innerHTML="Edit"

         }else{
            todoinput.removeAttribute("readonly");
            todoEdit.innerHTML="save";
         }
    })

    todoDelete.addEventListener("click",()=>{
        parentdiv.removeChild(todoDiv);
        parentdiv.removeChild(todoActions);
        counter--;
        totaltask.innerHTML=counter;
    })

    if(counter>0){
        totaltask.innerHTML=counter;
    }


});

