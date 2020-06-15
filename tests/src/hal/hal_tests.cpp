#include <gtest/gtest.h>
#include "../../../src/hal/hal.hpp"

class HalTest : public testing::Test {

protected:
    Hal hal_;

    void SetUp() override { 
        hal_ = Hal();
    }

    void TearDown() override {
    }
};

TEST_F(HalTest, Register_Read_Address1_Returns1) {
  ASSERT_EQ(hal_.readRegister(1), 1);
}