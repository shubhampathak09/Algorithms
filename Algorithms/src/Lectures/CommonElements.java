package Lectures;

import java.util.HashMap;
import java.util.Scanner;

public class CommonElements {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n1 = s.nextInt();
        int[] a1 = new int[n1];
        for (int i = 0; i < a1.length; i++) {
            a1[i] = s.nextInt();
        }

        int n2 = s.nextInt();
        int[] a2 = new int[n2];

        for (int i = 0; i < a2.length; i++) {
            a2[i] = s.nextInt();
        }

        HashMap<Integer, Integer> fm = new HashMap<>();

    for(int val:a1){
        if(fm.containsKey(val)){

            int olf=fm.get(val);
            int nf= olf +1;
            fm.put(val,nf);

        }else {
            fm.put(val,1);
        }
    }


    for(int val : a2){

        if(fm.containsKey(val)){
            System.out.println(val);
            fm.remove(val);
        }

    }


    }
}
