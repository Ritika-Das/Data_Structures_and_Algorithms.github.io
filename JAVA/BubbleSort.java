class Sort{
    public static void bubble(int[] arr){
        int n = arr.length;
        int temp;
        boolean no_swap;
        for(int i=0; i<n; i++){
            no_swap = true;
            for(int j=0; j<n; j++){
                if(arr[i] < arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    no_swap = false;
                }
            }
            if(no_swap)
                break;
        }
        System.out.println("Sorted array is ");
        for(int i=0; i<n; i++){
            System.out.print(arr[i] + "\t");
        }
    }
}
public class Demo{

    public static void main(String []args){
        int[] a = {2,5,3,1,8,0,61,23,15,-5};
        Sort.bubble(a);
    }
}
