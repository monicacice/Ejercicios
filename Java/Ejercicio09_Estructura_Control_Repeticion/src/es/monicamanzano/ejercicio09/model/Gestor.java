/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package es.monicamanzano.ejercicio09.model;

/**
 *
 * @author monica
 */
public class Gestor {
    /**
     * 0-5 Niños
     * 6-15 Adolescentes
     * 16-60 Adulto
     * 60- infinito Viejuno
     * @param edad
     * @return 
     */
    public static String calcularSegmento(int edad) {
        String segmento;
        if (edad <= 5) {
            segmento="Niños";
        } else if (edad <=15){
            segmento="Adolescentes";
        } else if (edad <=60) {
            segmento= "Adulto";
        } else {
            segmento="Viejuno";
    }
        return segmento;
}
