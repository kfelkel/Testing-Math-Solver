#include "pch.h"
#include "solveLinear.h"

namespace solvelinear {
	solveLinear::solveLinear(): equation("") {}
	std::string solveLinear::solveEquation() {
        int n = equation.size(), sign = 1, coeff = 0;
        int total = 0, i = 0;

        for (int j = 0; j < n; j++) {
            if (equation[j] == '+' || equation[j] == '-') {
                if (j > i)
                    total += sign * stoi(equation.substr(i, j - i));
                i = j;
            }
            else if (equation[j] == 'x') {
                if ((i == j) || equation[j - 1] == '+')
                    coeff += sign;
                else if (equation[j - 1] == '-')
                    coeff -= sign;
                else
                    coeff += sign * stoi(equation.substr(i, j - i));
                i = j + 1;
            }
            else if (equation[j] == '=') {
                if (j > i)
                    total += sign * stoi(equation.substr(i, j - i));
                sign = -1;
                i = j + 1;
            }
        }
        if (i < n) {
            total += sign * stoi(equation.substr(i));
        }
        if (coeff == 0 && total == 0) {
            return "Infinite solutions";
        }
        if (coeff == 0 && total) {
            return "No solution";
        }
        int ans = -total / coeff;
        return "x=" + std::to_string(ans);
	}	
    std::string solveLinear::getEquation()const {
        return equation;
    }
}