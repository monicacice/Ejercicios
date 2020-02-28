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
public class Arbitro {
    private String  nombre;
    private Balon balon;
    
public Arbitro (String nombre) {
    this.nombre = nombre;
}
public void setBalon(Balon balon) {
    System.out.println("Undiano ha  recibiendo el balón");
    this.balon = balon;
}
public void cederBalon(Jugador jugador) {
    System.out.println("Undiano ha cediendo el balón a " + jugador.getNombre());
    jugador.setBalon(balon);
}

}
