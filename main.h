struct Coordonnees
{
	int* x = malloc(10 * sizeof(int));
	int* y = malloc(10 * sizeof(int));

	// if(a == NULL) {}     // malloc() was unable to allocate the memory, handle the
	//                      // error and DO NOT use this pointer anymore

	// // now you can treat a as a normal array of 10 ints:
	// a[4] = 51;

	// // suppose 10 ints aren't no more enough:
	// a = realloc(a, 20 * sizeof(int));

	// if(a == NULL) {}     // same thing as before

	// // here you have 20 ints, the previous 10 are still there
	// a[18] = a[4]

	// // don't forget to free the memory when you have finished:
	// free(a);
}