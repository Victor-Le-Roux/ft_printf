// #include "ft_printf.h"
#include "stdio.h"

// Function for executing more comprehensive tests
void run_comprehensive_tests()
{
	// Test various combinations of flags and width
	ft_printf("Comprehensive Test 1: %15s\n", "Hello");
	// Expected: Comprehensive Test 1:           Hello
	printf("Expected: %15s\n", "Hello");

	ft_printf("Comprehensive Test 2: %-10d\n", 42);
	// Expected: Comprehensive Test 2: 42        
	printf("Expected: %-10d\n", 42);

	ft_printf("Comprehensive Test 3: %+08i\n", -123);
	// Expected: Comprehensive Test 3: -00000123
	printf("Expected: %+08i\n", -123);

	// Test for precision with %s and %f
	ft_printf("Comprehensive Test 4: %.5s\n", "Hello, World!");
	// Expected: Comprehensive Test 4: Hello
	printf("Expected: %.5s\n", "Hello, World!");

	ft_printf("Comprehensive Test 5: %.2f\n", 3.14159);
	// Expected: Comprehensive Test 5: 3.14
	printf("Expected: %.2f\n", 3.14159);

	// Test for %p
	void *ptr = (void *)0x12345678;
	ft_printf("Comprehensive Test 6: %p\n", ptr);
	// Expected: Comprehensive Test 6: 0x12345678
	printf("Expected: %p\n", ptr);
 
	// Test for %o (octal)
	int octal_num = 077;  // 63 in decimal
	ft_printf("Comprehensive Test 7: %o\n", octal_num);
	// Expected: Comprehensive Test 7: 77
	printf("Expected: %o\n", octal_num);

	// Test for a combination of flags, width, precision, and type
	ft_printf("Comprehensive Test 8: %+10.4f\n", -123.456789);
	// Expected: Comprehensive Test 8:  -0123.4568
	printf("Expected: %+10.4f\n", -123.456789);

	// Test for bonus flags: '-0.'
	ft_printf("Comprehensive Test 9: %0-15.10f\n", 3.14159);
	// Expected: Comprehensive Test 9: 3.1415900000
	printf("Expected: %0-15.10f\n", 3.14159);

	// Test for bonus flags: ' #'
	ft_printf("Comprehensive Test 10: % #x\n", 255);
	// Expected: Comprehensive Test 10: 0xff
	printf("Expected: % #x\n", 255);

	ft_printf("Comprehensive Test 11: % d\n", 123);
	// Expected: Comprehensive Test 11:  123
	printf("Expected: % d\n", 123);
}

int main()
{
	run_comprehensive_tests();
	return 0;
}
