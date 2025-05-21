import java.io.IOException;
import java.util.Scanner;

public class Main{
    public static void main(String[] args) throws IOException {
        Scanner keyboard = new Scanner (System.in);
        
        int raio = keyboard.nextInt();
        double volumeEsfera = (4.0/3 * Math.PI * Math.pow(raio, 3));

        System.out.printf("VOLUME = %.3f\n", volumeEsfera);

        keyboard.close();
    }
}