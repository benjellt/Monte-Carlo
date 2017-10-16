#include "stdafx.h"

#include "Wrapper.hpp"

using namespace Computations;
namespace Wrapper {
	void WrapperClass::getPriceCallEuro(int sampleNb, double T, double S0, double K, double sigma, double r) {
		double ic, px;
		calleuro(ic, px, sampleNb, T, S0, K, sigma, r);
		this->confidenceInterval = ic;
		this->price = px;
	}
}