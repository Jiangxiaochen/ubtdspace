#include <mycpp.h>

int main()
{
	const char *cp = "hello world!!!";
	char noNull[] = {
		'h','i'
	};
	string s1(cp);
	string s2(noNull,2);
	string s3(noNull);		//undef

	VIEW_SEQ(s1);
	VIEW_SEQ(s2);
	VIEW_SEQ(s3);

	string s4(cp+6,5);
	string s5(s1,6,5);
	string s6(s1,6);
	
	VIEW_SEQ(s4);
	VIEW_SEQ(s5);
	VIEW_SEQ(s6);

	string s7(s1,6,20);
	try{
		string s8(s1,16);	//out_of_range exception
	}catch(out_of_range e){
		cout << e.what() << endl;
	}

	string s8("hello world");
	SEQ_SIZE(s8);
}
