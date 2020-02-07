class Invasor {

    /* 
    aspecto - fichero gráfico
    x, y
    alto,ancho
    velocidad
    
    */
    constructor(nombreFichero, x, y, alto, ancho, velocidad) {

        this.aspecto = new Image();
        this.aspecto.src = "./img/" + nombreFichero;
        this.x=x;
        this.y = y;
        this.alto = alto;
        this.ancho = ancho;
        this.velocidad = velocidad;

    }
    mover() {
        this.x = this.x + this.velocidad;
        
        if(this.x+this.ancho > c.width|| this.x <0){
            this.velocidad = this.velocidad * -1;
        }
        
        
        ctx.drawImage(this.aspecto, this.x, this.y, this.ancho, this.alto);
        console.log(this.x);
    }
    disparar() {

    }




    bajar() {


    }







}