import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
import java.io.*;
import java.util.Scanner;

public class A {


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
        int[] a=new int[100001];
        int index = 1;
        for(int i=1;i<=100001;i++)
        {
            if(i%3==0 || String.valueOf(i).endsWith("3"))
                continue;
            else
                a[index++] = i; 
        }

        while (t-- > 0)
        {
            int val = sc.nextInt();
            System.out.println(a[val]);
        }
    }
}
