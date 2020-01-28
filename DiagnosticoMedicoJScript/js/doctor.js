
function diagnosticar(){
    console.log("DIAGNOSTICANDO");
    var dolorDeCabeza = document.getElementById("dolordecabeza").checked;
    var fiebre = document.getElementById("fiebre").checked;
    var origenchina = document.getElementById("origenchina").checked;

    if (dolorDeCabeza==true){
        if(fiebre==true){
            if(origenchina==true){
                alert("Coronavirus");
            } else {
                alert("Gripe");
            }
        } else{
            alert("No tienes nada");
        }
    } else{
        alert("Estas fenomenal")
    }
}
