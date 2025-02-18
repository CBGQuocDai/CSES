
import java.util.Scanner;

public class appleDivision {
    private static long ans = 100000000000L,tmp =0L;
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt();
        int[] p = new int[n];
        long sum =0;
        for(int i=0;i<n;i++){
            p[i] =sc.nextInt();
            sum+=p[i];
        }
        gen(0,p,n,sum);
        System.out.println(ans);
    }
    private static void gen(int vt,int[] p, int n,long sum ){
        for(int i=0;i<2;i++){
            tmp += i*p[vt];
            if(vt == n-1 ){
                ans =Math.min(ans,Math.abs((sum-tmp) - tmp));
            }
            else{
                gen(vt+1,p,n,sum);
            }
            tmp -= i*p[vt];
        }
    }
}
