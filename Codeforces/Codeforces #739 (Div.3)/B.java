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
            }
            catch (Exception e) {
            }
        }

        int t=1;
        t = sc.nextInt();
        while (t-- > 0)
        {
            int a=sc.nextInt();
            int b=sc.nextInt();
            int c=sc.nextInt();
            int dif=Math.abs(a-b);
            int total = dif*2;
            if(a>total || b>total || c>total)
                System.out.println(-1);
            else{
                if(c+dif>total)
                    System.out.println(c-dif);
                else
                    System.out.println(c+dif);
            }
        }
    }
}
