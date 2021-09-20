
package ayush;
import java.util.Scanner;
/**
 *
 * @author AYUSH
 */
public class students {
    public static void main(String[] args) {
        int [][]student=new int[3][4];
        int sum;
        int max=0;
        int topper=0;
        int []total=new int[3];
        Scanner kb =new Scanner(System.in);
        for(int i=0;i<3;i++)
        {
            sum=0;
            for(int j=0;j<4;j++)
            {
                System.out.println("Enter Student "+(i+1)+" Marks in subject "+(j+1)+":");
                student[i][j]=kb.nextInt();
            }
             for(int j=0;j<4;j++)
            {
                sum=sum+student[i][j];
            }
             total[i]=sum;
            
            
        }
        for(int i=0;i<3;i++)
        {
             System.out.println("Total marks of student "+(i+1)+":"+total[i]);
             if(total[i]>=max)
             {
                 max=total[i];
                 topper=i+1;
             }
             
        }
        System.out.println("Topper is student "+topper+"Marks is:"+max);
        
        
    }
}
