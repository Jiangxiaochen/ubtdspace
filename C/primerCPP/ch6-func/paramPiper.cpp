void func(int a, int b){}
void func(double a, double b){}

void ff(int a){}
void ff(short a){}

void manip(long a){}
void manip(float a){}

int main()
{
	//func(1,1.1);二义性
	ff('c');//会调用ff(int)
	manip(1.1f);
}
