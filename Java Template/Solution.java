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

    
        int t = sc.nextInt();
        while (t-- > 0)
        {
            System.out.println("Hello World");
        }
    }
}
