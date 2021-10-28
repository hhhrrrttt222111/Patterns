using System;

class GFG {
	
public static void Main() {
	
	// HERE, we have set the size of Heart, size = 10
	int a, b, size = 15;

	/* FOR THE APEX OF HEART */
	for (a = size / 2; a <= size; a = a + 2) {
		
	// FOR SPACE BEFORE PEAK-1 : PART 1
	for (b = 1; b < size - a; b = b + 2)
		Console.Write(" ");

	// FOR PRINTING PEAK-1 : PART 2
	for (b = 1; b <= a; b++)
		Console.Write("A");

	// FOR SPACE B/W PEAK-1 AND PEAK-2 : PART 3
	for (b = 1; b <= size - a; b++)
		Console.Write(" ");

	// FOR PRINTING PEAK-2 : PART 4
	for (b = 1; b <= a - 1; b++)
		Console.Write("A");

	Console.WriteLine();
	}

	/*FOR THE BASE OF HEART ie. THE INVERTED TRIANGLE */

	for (a = size; a >= 0; a--) {
		
	// FOR SPACE BEFORE THE INVERTED TRIANGLE : PART 5
	for (b = a; b < size; b++)
		Console.Write(" ");

	// FOR PRINTING THE BASE OF TRIANGLE : PART 6
	for (b = 1; b <= ((a * 2) - 1); b++)
		Console.Write("B");

	Console.WriteLine("");
	}
}
}

