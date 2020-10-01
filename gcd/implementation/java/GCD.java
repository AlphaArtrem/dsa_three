import java.util.Scanner;
import java.math.BigInteger;

public class GCD {
    static BigInteger zero = new BigInteger("0");
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the numbers for which you want to calculate GCD :");

        BigInteger a = new BigInteger(input.next());
        BigInteger b = new BigInteger(input.next());

        System.out.println("GCD of " + a + " and " + b + " is : " + gcd(a, b));
        input.close();
    }

    static BigInteger gcd(BigInteger a, BigInteger b) {
        if(a.equals(zero) || a.equals(b)){
            return b;
        }else if(b.equals(zero)){
            return a;
        }else{
            if(a.compareTo(b) == 1){
                return gcd(b, a.divideAndRemainder(b)[1]);
            }else{
                return gcd(a, b.divideAndRemainder(a)[1]);
            }
        }
    }
}
