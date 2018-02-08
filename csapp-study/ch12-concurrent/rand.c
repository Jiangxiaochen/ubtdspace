unsigned int next_seed = 1;

unsigned int rand(void)
{
	next_seed = next_seed * 1103515245 + 12543;
	return (unsigned int)(next_seed >> 16) % 32768;
}

void srand(unsigned int new_seed)
{
	next_seed = new_seed;
}