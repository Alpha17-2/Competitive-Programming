import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
import java.io.*;
import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        if (System.getProperty("ONLINE_JUDGE") == null) {
            try {
                System.setOut(new PrintStream(new FileOutputStream("output.txt")));
                sc = new Scanner(new File("input.txt"));
            } catch (Exception e) {
            }
        }

        int t = 1;
        t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int number = nearestPerfectSquare(n);
            int tempRow = (int) (Math.sqrt(number));
            int fixedRow = tempRow;
            int ourColumn = tempRow;
            int ourNewRow = tempRow;
            if (n >= (number - tempRow + 1)) {
                ourColumn = 1 + (number - n);
            } else {
                int last = (number - tempRow + 1);
                ourNewRow = tempRow - (last - n);
            }
            System.out.println(ourNewRow + " " + ourColumn);
        }
    }

    public static int nearestPerfectSquare(int n) {
        while (!isPerfectSquare(n)) {
            n++;
        }
        return n;

    }

    public static boolean isPerfectSquare(int n) {
        int p = (int) (Math.sqrt(n));
        if (p * p == n)
            return true;
        else
            return false;
    }
}
