var c;
var ctx;
var antonio;
var alberto;

function inicializar() {
    console.log("Inicializando...");
    //Obtienes la referencia al canvas(lienzo)
    c = document.getElementById("pantalla");
    ctx = c.getContext("2d");
    //Pinta en negro la pantalla
    ctx.fillStyle = "black";
    ctx.fillRect(0,0, c.width, c.height);
    //Instanciamos el alien
    antonio = new Invasor("invasor.png", 0,0,50,50,5);
    alberto = new Invasor("invasor.jpg", 55,0,50,50,7);
    
    //LLamada a jugar
    setInterval(function(){
        jugar();
    },1000);




}



function jugar() {
    console.log("Jugando...");
    antonio.mover();
    alberto.mover();
}