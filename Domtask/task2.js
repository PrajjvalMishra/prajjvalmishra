document.querySelector(".container").style.fontFamily="Arial,sans serif";

let nickname = document.getElementById("nicknames");
let favourites= document.getElementById("favourites");
let hometown=document.getElementById("hometown");

nickname.innerHTML=`Chotu`;
favourites.innerHTML=`Top Notch Editing`;
hometown.innerHTML=`Amrica`;


// let info=document.getElementsByClassName("info");
// console.log(info);

// info[0].innerHTML=`Chotu`;
// info[1].innerHTML=`Top Notch Editing`;
// info[2].innerHTML=`Amrica`;

let li=document.querySelectorAll("li");

li.forEach((element) =>{
   element.setAttribute("class","list-items");
   element.style.color="red";
})

let image=document.querySelector(".image");
 
let myphoto=document.createElement("img");

myphoto.setAttribute("src","https://i.pinimg.com/736x/8e/b8/6e/8eb86e77583008a395cf7e923a37ebff.jpg");
myphoto.style.borderRadius="50%";
image.appendChild(myphoto);