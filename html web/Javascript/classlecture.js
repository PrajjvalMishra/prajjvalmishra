//Class Date 15/02/2023==================================================================================================================

//var myname = "Prajjval";

//var myname = "Prajjval Mishra";
//console.log(myname);

//var myname = "Prajjval Kumar Mishra";
//console.log(myname);

//function newfunction(){
//    var myLastName = "mishra";
//    console.log(myLastName);
//}

//console.log(mylastname);

//Class Date 16/02/2023==================================================================================================================

//let is more preferred for variable declaration
//let is block scoped{}
//A block is a piece of code bounded by{}
//Anything within these curly  braces is a block;

//Class Date 17/02/2023==================================================================================================================

//let myCount = 4;
//if(myCount>3){
//    let say ="Say hello!"
//    console.log(say);
//}
//console.log(say)

//==================================================================================================================
//let can be updated but it can't be redeclared
//let myName ="Prajjval"
//console.log(myName);

//myName="Prajjval Mishra"
//console.log(myName);

//Class Date 18/02/2023 ===============================================================================================================

//const l =3, m= 2;
//console.log( l== m) //Equal to, return a true if operands are equal
//console.log(l!=m) //Not equal to

//=== ->, strict equalto

//console.log(l=== '2');

//&& -> Logical And

// const x=5, y=2;
//console.log((x<6)&&(y>4));

//|| -> Logical OR

//const a=5, b=2;
//console.log((a<6)||(b>4));

// Logical NOT (see yourself)

// if(x>y){
//     console.log("x is greater");
// }
// else{
//     console.log("y is greater");
// }


//Class Date 19/02/2023==================================================================================================================
//Lecture on {Template literal-> Backtick(`)}, String Interpolation,

// let stringText ="Hello, My name is Prajjval";

// let myText=`Hello, I am "Prajjval"!`;

// let multiLineText=`heyy !
// My name is,
// RDJ`;

// console.log(multiLineText);

// let myFirstName= "Prajjval";
// let myLastName= "Mishra";

// let myName=`Hey, I am ${myFirstName},${myLastName}`;
//  console.log(myName);


// let number = 5;

// switch(number){
//     case 1:
//         console.log("Number is 1 ");
//         break;

//     case 4:
//         console.log("Number is 4 "); 
//         break;   

//     case 5:
//         console.log("Number is 5 "); 
//         break;  

//     default:
//         console.log("Doesnot exist");             
// }


// let day = "wednesday";

// switch(day){
//     case "monday":
//         console.log("Today is monday");
//         break;

//     case "tuesday":
//         console.log("Today is Tuesday"); 
//         break;   

//     case "wednesday":
//         console.log("Today is Wednesday"); 
//         break;  

//     default:
//         console.log("Day Doesnot exist");             
// }


// let day1 = "friday";

// switch(day1){
//     case "monday":
//         console.log("Today is monday");
//         break;

//     case "tuesday":
//         console.log("Today is Tuesday"); 
//         break;   

//     case "wednesday":
//         console.log("Today is Wednesday"); 
//         break;  

//     default:
//         console.log("Day Doesnot exist");             
// }



// let language = "mandarian";

// switch(language){
//     case "chinese": case "mandarian":
//         console.log("Most number of native speaker!");
//         break;

//     case "spanish":
//         console.log("2nd place in number of native speaker"); 
//         break;   

//     case "english":
//         console.log("3rd place"); 
//         break; 

//     case "hindi":
//         console.log("Number 4"); 
//         break;    

//     case "arabic":
//         console.log("5thh most spoken language"); 
//          break;           

//     default:
//         console.log("Great language too:D");             
// }


//Class Date 23/02/2023=================================================================================================================================
// Functions  

// function checkOddOrEven(num){
//     if(num%2==0) {
//         console.log("Even No.");
//     }
//     else {
//         console.log("odd no.");
//     }
// }

//  checkOddOrEven(20);
//  checkOddOrEven(21);
//  checkOddOrEven(53);

//  function checkOddOrEven(num1,num2){
//    if(num1%2==0&& num2%2==0) {
//        console.log(" both no. Even No.");
//    }
//    else if(num1%2==0&& num2%2!=0) {
//        console.log( "num1 is even num2 is odd");
//    }
//    else if(num1%2!=0&& num2%2==0) {
//       console.log( "num1 is odd num2 is even");
//   }
//   else{
//    console.log("both are odd");
//   }
// }

// checkOddOrEven(25,20);

// function oddOrEven(a){
//    if(a%2==0){
//        console.log(`the number ${a} is even`);
//    }
//    else{
//        console.log(`the number ${a} is odd`);
//    }
// }
// oddOrEven(26);



//    //function name(paramete1, parameter2,.......){
//     //block of code
//    //}
//  function greeting(personName, personLast){
//     console.log("Hello Everyone " + personName + " " + personLast)
//  }

//  greeting("Nithin","Kumar");


//  //Addition Program

// // function Add(num1, num2){
// //     console.log(num1+num2);
// // }
// // Add(22,23);

//  //return of addtion program

//  function Add(num1, num2){
//   return(num1+ num2)
// }
// console.log(Add(22,23));
// Add(22,23);

//funtion task


// function num(physics,maths,bio,chemistry,computer){
//     let percentage= ((physics+maths+bio+chemistry+computer)/5);
//     if (percentage>=90){
//     console.log("Grade A")
//     }
//     else if (percentage>=80 ){
//     console.log("Grade B")
//     }
//     else if (percentage>=70 ){
//     console.log("Grade C")
//     }
//     else if (percentage>=60){
//     console.log("Grade D")
//     }
//     else if (percentage>=50 && percentage>40){
//     console.log("Grade E")
//     }
//     else {
//     console.log("Grade F")
//     }
// }
// num(90,95,96,98,99);


// function greatest(num1,num2,num3){
//     if(num1>num2 && num1>num3){
//         console.log("Greatest "+num1)
//     }
//     else if(num2>num3){
//         console.log("Greatest "+num2)
//     }
//     else{
//         console.log("Greatest "+num3)
//     }
    
// }
// greatest(22,23,24);


// function square(num){

//    return(num*num);
// }
// console.log(square(11));



// function convert(c){

//     return((c*1.8)+32)
// }
// console.log(convert(22));
  

// function rect(l,b){
//     return(l*b);
// }
// console.log(rect(5,4));


// function equal(num1,num2){
//     if(num1===num2){
//         console.log("equal")
//     }
//     else{
//         console.log("not equal")
//     }
// }
// equal(22,23);
  
//function equal using ternery operator
    // function equal(num1,num2){
    //     return(num1==num2 ?  console.log("equal"):console.log("not equal"));
    // }
    // console.log(equal(22,22));



// function pOc(r){
//     return(2*3.14*r);
// }
// function aOc(r){
//     return(3.14*r*r);
// }
// console.log(pOc(2));
// console.log(aOc(4));



//Class Date 25/02/2023=================================================================================================================================


// function hello(){  //function declaration
//     alert("Hello");
// }
// hello();

//function Expressions====
//just another syntax for function of creating a function

// let hello =function(){
//     console.log("hello, I am Prajjval");
// }
//  hello();


// //declare function
 
// function sumOne(a,b){
//     return a+b;
// }

// //same question done by function expression
// let sum = function(a,b){
//     return a+b;
// }

// console.log(sum(3,5));


// let convert = function(c){

//     return((c*1.8)+32);
// }
// console.log("Farenheit "+convert(60));


// let rect=function(l,b){
//     return(l*b);
// }
// console.log(rect(6,4));

// let pOc=function (r){
//     return(2*3.14*r);
// }
// let aOc=function (r){
//     return(3.14*r*r);
// }
// console.log("perimeter of circle "+pOc(2));
// console.log("area of circle "+aOc(4));

// let equal=function(num1,num2){
//     if(num1===num2){
//         console.log("equal");
//     }
//     else{
//         console.log("not equal");
//     }
// }
// equal(22,23);


// ARROW fuction========ES6

// let multi = function(x,y){  ///function expression
//     return x*y;
// }

// let multiArrow = (x,y) => x*y; //arrow function;

// let helloArrow =() => console.log("hello world");
// helloArrow();

// let oddEven =(num) =>{
//  if(num%2==0) {
//             console.log("Even No.");
//         }
//         else {
//             console.log("odd no.");
//         }
//     }     

// oddEven(23);  

// let range=(num) =>{
//     if(num>10&& num<15){
//         console.log("No. in range");
//     }
//     else{
//         console.log("no. not in range");
//     }

// }
// range(12);



// let greatest=(num1,num2,num3)=>{
//     if(num1>num2 && num1>num3){
//         console.log("Greatest "+num1)
//     }
//     else if(num2>num3){
//         console.log("Greatest "+num2)
//     }
//     else{
//         console.log("Greatest "+num3)
//     }
    
// }
// greatest(22,23,24);



// let square =(num)=>{

//    return(num*num);
// }
// console.log(square(11));
  

/////


// let calAverage = (scoreOne,ScoreTwo,ScoreThree)=>{
//     let average=(scoreOne+ScoreTwo+ScoreThree)/3;
//     return average;
// };

// let dolphinAver= calAverage(44,23,71);
// let KoalasAver= calAverage(65,54,49);

// console.log(dolphinAver);
// console.log(KoalasAver);

// let checkWinner =(dolphinAver,KoalasAver)=>{
//     if(dolphinAver >= 2*KoalasAver){
//         console.log("Dolphin is the winner")
//     }else if(KoalasAver>=2*dolphinAver){
//         console.log("koala is the winnner");
//     } else{
//         console.log("draw");
//     }
// }
// checkWinner(dolphinAver,KoalasAver);


// let greet =()=> console.log( "My name is Prajjval");
// greet();

// let greet =(name of the person)=> console.log( "My name is Prajjval");
// greet();

// let counterFunction=(counter)=>{
//     if(counter>100){
//         counter =0;
//     }else{
//         counter++;
//     }
//     return counter;
// }

// console.log(counterFunction(96));


// let Even =(num) =>{
//  if(num%2==0) {
//             console.log("Even No.");
//         }
//         else {
//             console.log("number not even");
//         }
//     }  
//  Even(21); 


// let isEven=(num) =>(num%2)===0;
// console.log(isEven(23));
  
// let greet =(firstName, lastName) =>console.log(`Hello, ${firstName} ${lastName}`)
// greet("Prajjval","Mishra");



// let weight=(kg)=>{
//   let lbs= kg*2.2;
//  if(lbs>150){
//     return "Obese";
//  }
//  else if(lbs>150 && lbs<100){
//     return "You are Ok";
//  }
//  else if(lbs<100){
//     return "Underweight";
//  }
//  else{
//     return "Bhagwan Malik";
//  }
// }
// console.log(weight(56));


