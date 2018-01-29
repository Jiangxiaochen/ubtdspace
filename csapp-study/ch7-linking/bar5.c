extern int x;
double* xptr = (double*) &x;

void f(){

	*xptr = 0.0;
}
