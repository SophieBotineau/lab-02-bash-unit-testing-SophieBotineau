#include "c-echo.h"
#include "gtest/gtest.h"
TEST(EchoTest, Helloworld) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
	EXPECT_EQ("hello world", echo(3,test_val));
}
TEST(EchoTest, EmptyString){
	char* test_val[1]; test_val[0]= "./c-echo";
	EXPECT_EQ("",echo(1,test_val));
}
TEST(EchoTest, MyName){
	char* test_val[5]; test_val[0]="./c-echo"; test_val[1]="My"; test_val[2]="name"; test_val[3]="is"; test_val[4]="Sophie";
	EXPECT_EQ("My name is Sophie", echo(5, test_val));
}
TEST(EchoTest, HelloYou){
	char* test_val[3]; test_val[0]="./c-echo.h"; test_val[1]="Hello"; test_val[2]="you!";
	EXPECT_EQ("Hello you!", echo(3, test_val));
}
TEST(EchoTest, Coucou){
	char* test_val[2]; test_val[0]="./c-echo"; test_val[1]="Coucou!";
	EXPECT_EQ("Coucou!", echo(2, test_val));
}
int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

