import java.io.IOException;
import java.util.Scanner;

public class Main{
    public static void main(String [] args) throws IOException{
        Scanner keyboard = new Scanner (System.in);

        //lê valores da primeira linha
        int codigo1 = keyboard.nextInt();
        int qt1 = keyboard.nextInt();
        double preco1 = keyboard.nextDouble();

        //lê a segunda linha
        int codigo2 = keyboard.nextInt();
        int qt2 = keyboard.nextInt();
        double preco2 = keyboard.nextDouble();

        //calcula o total
        double total = (qt1 * preco1) + (qt2 * preco2);

        //printa na tela o total
        System.out.printf("VALOR A PAGAR: R$ %.2f\n", total);

        keyboard.close();
    }
}