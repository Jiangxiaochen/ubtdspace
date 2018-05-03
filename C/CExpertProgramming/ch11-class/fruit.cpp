#include <jxcutils.h>

class Fruit
{
public:
	Fruit(){
		printf("Fruit created\n");
	}
	~Fruit(){
		printf("Fruit deleted\n");
	}
	void peel(){
		printf("fruit peel\n");
	}
	void slice();
	void juice();
	int operator+(Fruit &f);
private:
	int weight;
	int calories_per_oz;
};

int Fruit::operator+(Fruit &f)
{
	printf("calling fruit addition\n");
	return weight + f.weight;
}

class Apple : public Fruit
{
public:
	void peel(){
		printf("apple peel\n");
	}
	void make_candy_apple(float weight);
	void bob_for(int tub_id, int number_of_attempts);
};

int main()
{
	Fruit melon;
	Apple apple;
	melon.peel();
	apple.peel();
	Fruit *p;
	p = &apple;
	p->peel();
	int ounces = apple + melon;
	printf("ounces: %d\n", ounces);
}
