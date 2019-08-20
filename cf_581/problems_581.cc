// Copyright 2019 Artem Priakhin

#include <cstddef>
#include <cstring>
#include <list>
#include <memory>
#include <numeric>
#include <scoped_allocator>
#include <stdexcept>
#include <string>
#include <vector>

#include "gmock/gmock.h"
#include "gtest/gtest.h"

using ::testing::ElementsAreArray;

namespace {

class ProblemA {
 public:
  int solve(const std::string& number) { return -1; }
};

TEST(ProblemATest, BaseTest) {
  ProblemA problemA;
   EXPECT_THAT(problemA.solve("101"), 0);
}

} // namespace
