import java.io.IOException;
import java.util.Scanner;

public class Main{
    public static void main(String [] args) throws IOException{
        Scanner keyboard = new Scanner (System.in);

        int x = keyboard.nextInt();
        int y = keyboard.nextInt();
        int soma = x + y;

        System.out.printf("SOMA = %d\n", soma);

        keyboard.close();
    }

}//end main