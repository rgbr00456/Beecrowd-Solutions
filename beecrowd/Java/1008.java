import java.io.IOException;
import java.util.Scanner;

public class Main{
    public static void main(String [] args) throws IOException{
        Scanner keyboard = new Scanner (System.in);

        int funcionario = keyboard.nextInt();
        int horas = keyboard.nextInt();
        double salarioHora = keyboard.nextDouble();

        double salario = horas * salarioHora;

        System.out.printf("NUMBER = %d\nSALARY = U$ %.2f\n", funcionario, salario);

        keyboard.close();
    }
}