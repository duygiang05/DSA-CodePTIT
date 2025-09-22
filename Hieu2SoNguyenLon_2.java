/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author PC
 */
import java.math.BigInteger;
import java.util.*;

public class Hieu2SoNguyenLon_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i = 0 ; i < t; i ++ ){
            BigInteger a = sc.nextBigInteger();
            BigInteger b = sc.nextBigInteger();
            int tmp = Integer.max(a.toString().length(), b.toString().length()); 
            String res = a.subtract(b).abs().toString();
            while(res.length() < tmp) {
                res = '0' + res;
            }
            System.out.println(res);
        }
    }
}
