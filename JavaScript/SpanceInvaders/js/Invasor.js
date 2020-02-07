class Invasor {
    
    /* 
    aspecto - fichero gráfico
    x, y
    alto,ancho
    velocidad
    
    */
    constructor (aspecto, x, y, alto, ancho, velocidad) {
    
       this.aspecto= aspecto;
       this.x= x;
       this.y= y;
       this.alto= alto;
       this.ancho= ancho;
       this.velocidad= velocidad;

    }
    mover() {
        this.x = this.x+  this.velocidad;
        console.log(this.x);
    }
    dipsarar(){

    }




    bajar(){


    }
        






}