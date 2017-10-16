#pragma once
#include "Computations.hpp"
using namespace System;

namespace Wrapper {

	public ref class WrapperClass
	{
	private:
		double confidenceInterval;
		double price;
	public:
		WrapperClass() { confidenceInterval = price = 0; };
		void getPriceCallEuro(int sampleNb, double T, double S0, double K, double sigma, double r);
		double getPrice() { return price; };
		double getIC() { return confidenceInterval; };
	};
}
