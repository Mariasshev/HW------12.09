#pragma once
class CPU
{
private:
	char* cpu_model;
	double cpu_price;
public:
	CPU();
	CPU(const char* m, double p);
	void SetModel(const char* m);
	void SetPrice(double price);
	CPU(const CPU& laptop);
	char* GetModel();
	double GetPrice();
	~CPU();
};

