import java.io.IOException;
import java.util.Scanner;

public class Main{
    public static void main(String[] args) throws IOException{
        Scanner keyboard = new Scanner(System.in);

        double raio = keyboard.nextDouble();
        double area = (raio*raio) * 3.14159;

        System.out.printf("A= %.4f\n", area);
    }
}//end main