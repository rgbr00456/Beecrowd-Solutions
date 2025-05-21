import java.io.IOException;
import java.util.Scanner;

public class Main{
    public static void main (String [] args) throws IOException{
        Scanner keyboard = new Scanner (System.in);

        int a = keyboard.nextInt();
        int b = keyboard.nextInt();
        int c = keyboard.nextInt();
        int d = keyboard.nextInt();

        int prod1 = a * b;
        int prod2 = c * d;

        int diferenca = prod1 - prod2;

        System.out.printf("DIFERENCA = %d\n", diferenca);

        keyboard.close();
    }
}