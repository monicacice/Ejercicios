/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package es.monicamanzano.ejercicio0005_calcu_panico;

/**
 *
 * @author monica
 */
public class Ejecutador {
    public static void main (String []args) {
        CalculadoraPanico cp = new CalculadoraPanico (1000,300);
        String nivelDeRiesgo = cp.calcular();
        System.out.println("El nivel de riesgo es: " + nivelDeRiesgo);
    }
    
}
