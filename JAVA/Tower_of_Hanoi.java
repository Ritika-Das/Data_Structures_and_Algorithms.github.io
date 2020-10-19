public class TowerOfHanoi
{
    static void towerOfHanoi(int n, char source, char dest, char aux_rod) 
    { 
        if (n == 1) 
        { 
            System.out.println("Move disk 1 from rod " +  source + " to rod " + dest); 
            return; 
        } 
        towerOfHanoi(n-1, source, aux_rod, dest); 
        System.out.println("Move disk " + n + " from rod " +  source + " to rod " + dest); 
        towerOfHanoi(n-1, aux_rod, dest, source); 
    } 
    
    public static void main(String args[]) 
    { 
        int n = 4; 
        towerOfHanoi(n, 'A', 'C','B');
    } 
} 
