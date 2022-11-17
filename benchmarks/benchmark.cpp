#define ANKERL_NANOBENCH_IMPLEMENT
#include "nanobench.h"
#include <pystring.h>
#include <atomic>

int main()
{
  ankerl::nanobench::Bench().run("endswith", [&]
                                 {
                                   auto a = pystring::endswith("", "");
                                   a = pystring::endswith(".mesh", ".mesh");
                                   pystring::endswith(".mesh", "mesh"); });

  ankerl::nanobench::Bench().run("split", [&]
                                 {
                                   auto a = pystring::endswith("", "");
                                   a = pystring::endswith(".mesh", ".mesh");
                                   pystring::endswith(".mesh", "mesh"); });
}
