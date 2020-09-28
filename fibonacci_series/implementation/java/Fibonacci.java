import java.util.*;
import java.math.BigInteger;

public class Fibonacci{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the postion of fibonnaci number (n) to calculate : ");
        int n = input.nextInt();
        if(n < 0){
            System.out.println("n can't be less than 0");
        }else if(n <= 2){
            System.out.println(n - 1);
        }else{
            // We'll use BigIntegers to store our values as fibonacci numbers can get really long
            BigInteger secondLast = new BigInteger("0");
            BigInteger last = new BigInteger("1");
            BigInteger fibonnaciNumber = new BigInteger(secondLast.toString());
            fibonnaciNumber = fibonnaciNumber.add(last);
            for(int i = 3; i < n; i++){
                // Since BigIntegers are immutable we need to reallocate them instead of reassign
                secondLast = new BigInteger(last.toString());
                last = new BigInteger(fibonnaciNumber.toString());
                fibonnaciNumber = new BigInteger(secondLast.toString());
                fibonnaciNumber = fibonnaciNumber.add(last);
            }
            System.out.println(fibonnaciNumber);
        }
    }
}