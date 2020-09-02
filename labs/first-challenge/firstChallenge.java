import java.lang.reflect.Array;

public class Code1 {
	
	
	public static void getLength() {
		
		int count = 0;
		int[][] numeros = {{1}, {1, 2}, {1, 2, 3}};
		
		
		for (int j = 0; j < numeros.length; j++) {
				if( Array.getLength(numeros[j]) > 1  ) {
					for (int i = 0; i < Array.getLength(numeros[j]); i++) {
						count++;
					}
				}
				else {
					count++;
				}
			}
		System.out.println(count);
	}

	
	public static void main(String[] args) {
		
	
		getLength();
		
		
	}
	
}
