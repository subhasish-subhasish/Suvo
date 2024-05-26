

let phoneNumberInput=document.querySelector("#number");

let verifyButton = document.querySelector("#verifyButton");

verifyButton.addEventListener("click",function(){
    const number =phoneNumberInput.value.trim(); //remove trailing space

    const validationResult= validateMobileNumber(number);

    if(validationResult=== "Valid"){
    }
    else{
        alert(validationResult);
    }
});

function validateMobileNumber(number){

    if(number.length !=10){
        return "Invalid Number must be 10 digit";
    }

    return "Valid";
}




 