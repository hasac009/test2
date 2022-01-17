#include "C-class.cpp"

Phone::Phone()
{
	number = "88005553535";
	model = "Nokia 3310";
	weight = 1000;
}
Phone::Phone(string num, string mod)
{
	number = num;
	model = mod;
	weight = 0;
}
Phone::Phone(string num, string mod, int w)
{
	number = num;
	model = mod;
	weight = w;
}