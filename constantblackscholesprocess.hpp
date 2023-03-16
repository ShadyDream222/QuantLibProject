#pragma once 
#include <ql/stochasticprocess.hpp>


namespace QuantLib {

    class ConstantBlackScholesProcess : public StochasticProcess1D {

        // your implementation goes here
    public:
        ConstantBlackScholesProcess(double underlyingValue_, double riskFreeRate_, double volatility_, double dividend_);


        Real x0() const;
        Real drift(Time t, Real x) const;
        Real diffusion(Time t, Real x) const;
        Real apply(Real x0, Real dx) const;

    private:
        double underlyingValue;
        double riskFreeRate;
        double volatility;
        double dividend;

    };

}
