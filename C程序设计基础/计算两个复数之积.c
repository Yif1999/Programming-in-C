struct complex multiply(struct complex x, struct complex y)
{
	struct complex result;
	result.real=x.real*y.real-x.imag*y.imag;
	result.imag=x.real*y.imag+x.imag*y.real;
	return result;
}