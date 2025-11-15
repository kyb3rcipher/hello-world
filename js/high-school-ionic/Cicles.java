/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package cicles;

import java.util.Scanner;

/**
 *
 * @author kyb3r
 */
public class Cicles {

    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int couter;
        
        System.out.print("Enter the terms number: ");
        couter = input.nextInt();
        
        for (int i = 2; i <= couter; i+=2) {
            System.out.println(i);
        }
        
    }
    
}
