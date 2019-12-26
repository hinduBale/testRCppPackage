#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
double addCpp(NumericVector x)
{
  double total = 0.0;
  int n = x.size();
  for(int i = 0; i < n; i++)
    total += x[i];
  return total;
}

// [[Rcpp::export]]
double multiplyCpp(NumericVector x)
{
  double total = 1.0;
  int n = x.size();
  for(int i = 0; i < n; i++)
    total *= x[i];
  return total;
}

// [[Rcpp::export]]
double subtractCpp(double x, double y)
{
  return (x - y);
}

// [[Rcpp::export]]
double divideCpp(double x, double y)
{
  return (x/y);
}
