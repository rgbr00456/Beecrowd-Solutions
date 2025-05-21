import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner keyboard = new Scanner(System.in);

        double x = keyboard.nextDouble();
        double y = keyboard.nextDouble();
        double media = ((x * 3.5) + (y * 7.5)) / 11;

        System.out.printf("MEDIA = %.5f\n", media);

        keyboard.close();
    }
}