
package ayush;
import java.util.*;

 class Best_saler {
     public static void main(String[] args) {
         Scanner kb = new Scanner (System.in);
         int n,x,index=0,sum=0;
         float best=0;
         
         System.out.println("How many salesmen ?");
         n = kb.nextInt();
         int [][]sale = new int [n][];
         float []avg= new float [n];
         for(int i=0;i<sale.length;i++)
         {
             System.out.println("How many sales for salesman "+(i+1));
             x=kb.nextInt();
             sale[i]=new int [x];
             sum=0;
             for(int j=0;j<sale[i].length;j++)
             {
                 System.out.println("Enter sale value:");
                 sale[i][j]=kb.nextInt();
                 sum=sum+sale[i][j];
             }
             avg[i]=(float)sum/sale[i].length;
         }
         for(int i=0;i<sale.length;i++)
         {
             System.out.println("Average sale of salesman "+(i+1)+"is :"+avg[i]);
             if(avg[i]>=best)
             {
                 best=avg[i];
                 index = i;
             }
         }
         System.out.println("Best salesman is "+(index+1));
     }
    
}
