import java.io.IOException;
import java.util.Scanner;

public class Main{
    public static void main(String [] args) throws IOException{
        Scanner keyboard = new Scanner (System.in);

        int a = keyboard.nextInt();
        int b = keyboard.nextInt();
        int c = keyboard.nextInt();

        int maiorAB = (a + b + Math.abs(a-b)) / 2;
        int maior;

        if (maiorAB > c){
            System.out.printf("%d eh maior\n", maiorAB);
        }
        else{
            System.out.printf("%d eh maior\n", c);
        }

        keyboard.close();
    }
}