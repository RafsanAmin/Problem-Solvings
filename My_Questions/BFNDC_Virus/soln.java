import java.util.Scanner;

public class soln {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        for (int t = 0; t < T; t++) {
            int N = scanner.nextInt();
            int X = scanner.nextInt();
            int K = scanner.nextInt();
            double totalSum = 0.0;
            for (int i = 2; i <= N + 1; i++) {
                totalSum += Math.log(i);
            }
            double logX = Math.log(X);
            double logK = Math.log(K);
            double result = (totalSum + logX) / logK;
            int roundedResult = (int) Math.ceil(result);
            System.out.println(roundedResult);
        }
    }
}