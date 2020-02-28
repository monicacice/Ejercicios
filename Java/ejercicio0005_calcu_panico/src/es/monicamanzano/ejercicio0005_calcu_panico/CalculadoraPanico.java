/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package es.monicamanzano.ejercicio0005_calcu_panico;

/**
 *
 * @author cice
 */
public class CalculadoraPanico {
    
    private int numeroContagiados;
    private int numeroBajas;

    public CalculadoraPanico(int numeroContagiados, int numeroBajas) {
        this.numeroContagiados = numeroContagiados;
        this.numeroBajas = numeroBajas;
    }

public String calcular() {
    
    String riesgo;
    
    
    float porcentaje = numeroBajas/ numeroContagiados;
    porcentaje = porcentaje * 100;
    if(porcentaje<3) {
        riesgo = ("Inquietud");
    } else if(porcentaje<10){
        riesgo = ("Miedito");
}       else {
    riesgo = ("Apocalipsis");
}   
    return riesgo;
    
    
    
}
