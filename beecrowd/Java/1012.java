import java.io.IOException;
import java.util.Scanner;

public class Main{
    public static void main(String [] args) throws IOException{
        Scanner keyboard = new Scanner (System.in);

        double a = keyboard.nextDouble();
        double b = keyboard.nextDouble();
        double c = keyboard.nextDouble();

        double areaTriangulo = (a * c) / 2;
        double areaCirculo = 3.14159 * Math.pow(c, 2);
        double areaTrapezio = ((a + b)*c) / 2;
        double areaQuadrado = Math.pow(b, 2);
        double areaRetangulo = a * b;

        System.out.printf("TRIANGULO: %.3f\n", areaTriangulo);
        System.out.printf("CIRCULO: %.3f\n", areaCirculo);
        System.out.printf("TRAPEZIO: %.3f\n", areaTrapezio);
        System.out.printf("QUADRADO: %.3f\n", areaQuadrado);
        System.out.printf("RETANGULO: %.3f\n", areaRetangulo);

        keyboard.close();
    }
}