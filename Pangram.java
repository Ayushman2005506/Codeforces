import java.util.*;
public class hello1{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        String s=sc.next();
        if(n<26){
           System.out.println("NO");
           return; 
        }
        boolean[] seen=new boolean[26];
        for(int i=0;i<s.length();i++){
            char c=Character.toLowerCase(s.charAt(i));
            seen[c-'a']=true;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(seen[i]){
                count++;
            }
        }
        if(count==26){
             System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}
