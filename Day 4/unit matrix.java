
package ayush;
import java.util.*;

/**
 *
 * @author AYUSH
 */
public class unitmatrix {
    public static void main(String[] args) {
        int [][]matrix=new int [3][3];
        int count=0;
        Scanner kb= new Scanner(System.in);
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
               System.out.println("Enter element in index ("+(i+1)+","+(j+1)+"):");
               matrix[i][j]=kb.nextInt();

            }
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
              if(i==j)
              {
                  if(matrix[i][j]==1)
                  {
                      count++;
                  }
              }
              else if(matrix[i][j]==0)
              {
                  count++;
              }
            }
        }
        System.out.println("count is "+count);
        if(count==9)
            System.out.println("Matrix is unit matrix");
        else
            System.out.println("Matrix is not an unit matrix");
    }
    
}
