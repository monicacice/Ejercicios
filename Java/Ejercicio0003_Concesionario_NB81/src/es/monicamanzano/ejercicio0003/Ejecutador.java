package es.monicamanzano.ejercicio0003;

/**
 * 
 * @author Monica Manzano Lobato
 */

public class Ejecutador {
    public static void main(String[] args) {
        Automovil mio = new Automovil("Volkswagen", "Golf", "Negro", "1234 ABC", 170);
        Automovil pan = new Automovil("Renault", "Capture", "Rojinegro", "567 DEF");
        
        
        mio.arrancar();
        mio.avanzar();
        mio.parar();

        pan.arrancar();
        pan.avanzar();
        pan.parar();
        
    }
}
