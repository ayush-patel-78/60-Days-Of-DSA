
package oopexamples;

/**
 *
 * @author AYUSH
 */
 class Worker {
     private int hw;
     private double payRate;
     
     public void setData(int h,double r)
     {
         hw=h;
         payRate=r;
     }
     public double getSalary()
     {
         double salary=0;
         if(hw<=40)
         {
             salary=hw*payRate;
         }
         else if(hw>40)
         {
             salary=hw*2*payRate;
         }
         return salary;
     }
    
}
