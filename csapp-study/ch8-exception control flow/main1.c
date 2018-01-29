int main(int argc, char const *argv[])
{
	write(1,"hello syscall\n\r\n",20);

	_exit(0);
}