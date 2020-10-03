class LinearSearch  
{  
    public static int search(int arr[], int x) { 
        int n = arr.length; 
        for(int i = 0; i < n; i++) { 
            if(arr[i] == x) 
                return i; 
        } 
        return -1; 
    } 
    
    public static void main(String args[]) { 
        int arr[] = { 1, 8, 7, 16, 10, 15 };  
        int x = 10; 
        int result = search(arr, x); 
        if(result == -1) 
            System.out.println("Element is not present in array"); 
        else
            System.out.println("Element is present at index: " + result); 
    } 
} 