package main;

import java.util.ArrayList;
import java.util.Scanner;
import java.util.concurrent.SynchronousQueue;

import javax.swing.plaf.synth.SynthScrollBarUI;

public class Ropecalculation {

    static int numberofvisibleclothes;
    static int ropelenth;
    static int numberofclother;
    static int clothwidth;
    static int startposition;
    static int[] startpoint;
    static int[] width;

    public static void main(String args[]) {

        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the rope length");
        ropelenth = scan.nextInt();
        System.out.println("Enter the  number of  clothes");
        numberofclother = scan.nextInt();
        for (int i = 0; i < numberofclother; i++) {
            startpoint = new int[numberofclother];
            width = new int[numberofclother];
            System.out.println("Enter start position");
            startposition = scan.nextInt();
            startpoint[i] = startposition;
            System.out.println("Enter width");
            clothwidth = scan.nextInt();
            width[i] = clothwidth;
            // System.out.println(startpoint.length);
        }
        Ropecalculation rp = new Ropecalculation();
        rp.checkvisibleclothes(startpoint, width);
    }

    public void checkvisibleclothes(int[] startpoint, int[] width) {

        for (int j = 0; j < startpoint.length - 1; j++) {
            int x = startpoint[j];
            int c = startpoint[j + 1];
            if (x == c) {
                int wide = width[j];
                int wideagain = width[j + 1];
                if (wide <= wideagain) {
                    numberofvisibleclothes = numberofclother - 1;
                }
            } else if (c == x + 1) {
                int wide1 = width[j];
                int wideagain1 = width[j + 1];
                if (wide1 > wideagain1) {
                    numberofvisibleclothes = numberofclother - 1;
                }
            }
        }
        System.out.println(numberofvisibleclothes);
    }
}