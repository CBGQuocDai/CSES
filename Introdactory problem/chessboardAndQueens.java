import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Scanner;

public class chessboardAndQueens {
    private static int ans=0;

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        List<String> board= new ArrayList<>();
        int[] visit= new int[8];
        for(int i=0;i<8;i++){
            board.add(sc.next());
            visit[i]=1;
        }
        HashMap<Integer,Integer> m1 = new HashMap<>();  // y= x+a -> a= y-x;
        HashMap<Integer,Integer> m2 = new HashMap<>(); //  y= -x+b -> b= y+x;
        int[] p= new int[8];
        gen(0,p,visit,board,m1,m2);
        System.out.println(ans);
    }
    private static void gen(int vt,int[] p,int[] visit,List<String> board,HashMap<Integer,Integer> m1,HashMap<Integer,Integer> m2){
        for(int i=0;i<8;i++){
            if(visit[i]==1) {
                char c= board.get(i).charAt(vt);
                if(c=='.'){
                    int u = m1.getOrDefault(vt-i,0);
                    int v= m2.getOrDefault(vt+i,0);
                    if(u!=0 || v!=0) continue;
                    visit[i]=0;
                    m1.put(vt-i,1);
                    m2.put(vt+i,1);
                    if(vt==7){
                        ans++;
                    }
                    else{
                        gen(vt+1,p,visit,board,m1,m2);
                    }
                    m1.put(vt-i,0);
                    m2.put(vt+i,0);
                    visit[i]=1;
                }
            }
        }
    }
}
