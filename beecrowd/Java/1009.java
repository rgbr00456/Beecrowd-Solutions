import java.io.IOException;
import java.util.Scanner;

public class Main{
    public static void main(String [] args) throws IOException{
        Scanner keyboard = new Scanner (System.in);

        String nome = keyboard.nextLine();
        double salarioFixo = keyboard.nextDouble();
        double vendasMes =  keyboard.nextDouble();

        double bonificacao = vendasMes * 0.15;
        double salarioMes = salarioFixo + bonificacao;

        System.out.printf("TOTAL = R$ %.2f\n", salarioMes);
        keyboard.close();
    }
}