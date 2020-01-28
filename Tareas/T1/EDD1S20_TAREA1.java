/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package edd1s20_tarea1;
import java.util.Scanner;
/**
 *
 * @author feram
 */
public class EDD1S20_TAREA1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int matriz[][];
        int a = 0;
        System.out.println("Matriz de M x M");
        System.out.println("Ingrese la medida para la matriz:");
        a = sc.nextInt();
        matriz= new int[a][a];
        System.out.println("Ingresando medida "+ a+"x"+a);
        if (a==0){
            System.out.println("No se puede generar una matriz de tamaño 0");
            
        }else if (a==1) {
            System.out.println("La matriz resultante es:");
            System.out.println("1");
        }else{
            
            for (int i = 0; i < a; i++) {
                for (int j = 0; j < a; j++) {
                    if (i==0 || i ==a-1) {
                        matriz[i][j]=1;                        
                    }else if (j==0 || j==a-1) {
                        matriz[i][j]=1;                        
                    }                   
                }
            }
            System.out.println("La matriz resultante es: ");
            for (int i = 0; i < a; i++) {
                for (int j = 0; j < a; j++) {
                    System.out.print(matriz[i][j]+" ");
                }
                System.out.println("");
            }
        } 
    }
        // TODO code application logic here
}
    

