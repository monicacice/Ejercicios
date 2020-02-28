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
public class Jugador {

    private String nombre;
    private Balon balon;
    
    public Jugador (String nombre) {
        this.nombre = nombre;
    }
     public String getNombre() {
         return this.nombre;
     }
    
    
    
    public void setBalon(Balon balon){
        System.out.println(this.nombre + " ha recibido el balón");
        this.balon = balon;  
    }
    public void pasarBalon (Jugador destinatario) {
        System.out.println(this.nombre + " ha pasado la pelota a " + destinatario.nombre);
        destinatario.setBalon(balon);
    }

    public void disparar() {
        System.out.println(this.nombre + " ha disparado a puerta");
        balon.volar();
        
    }

    
    
    
    
    

