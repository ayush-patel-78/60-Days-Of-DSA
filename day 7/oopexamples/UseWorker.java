
package oopexamples;
import java.util.*;
/**
 *
 * @author AYUSH
 */
 class UseWorker {
     public static void main(String[] args) {
         Scanner kb = new Scanner(System.in);
         Worker w ;
         w = new Worker();
         System.out.println("Enter no. of hours worker worked:");
         int hr=kb.nextInt();
         System.out.println("Enter the pay rate :");
         double rate=kb.nextDouble();
         w.setData(hr, rate);
         double sal=w.getSalary();
         System.out.println("Salary of worker is:"+sal);
     }
}
