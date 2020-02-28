/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package es.monicamanzano.ejercicio004_fifa2021;

/**
 *
 * @author monica
 */
public class Partido {
    public static void main (String[] args) {
        //Instantaciones
        Balon balon = new Balon("Blanco");
        Arbitro arbitro = new Arbitro ("Undiano");
        Jugador miguelAngel = new Jugador ("Miguel Angel");
        Jugador veronica = new Jugador ("Verónica");
        Jugador pascual = new Jugador ("Pascual");
        
        //1.Entrega el balon al arbitro
        arbitro.setBalon(balon);
        //2.Entrega el balon a un jugador
        arbitro.cederBalon(veronica);
        //3.El jugador pasa el balon a otro jugador
        veronica.pasarBalon(miguelAngel);
        miguelAngel.pasarBalon(pascual);
        //4.El jugador dispara a puerta
        pascual.disparar();
        
    }
    
}
