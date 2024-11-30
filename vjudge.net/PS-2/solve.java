import java.util.Scanner;

public class Main {

    public static int Dsum(int number) {
        int sum = 0;
        while (number > 0) {
            sum += number % 10;  
            number /= 10;        
        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();  

    
        while (Dsum(a) % 4 != 0) {
            a++;  
        }

        System.out.println(a);  
        sc.close();
    }
}
