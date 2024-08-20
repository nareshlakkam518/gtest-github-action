#include "PrintColorCode.h"
#include <gtest/gtest.h>

TEST(PrintColorCodeTestSuite, AssertColorCodeManualItemsCount){
//Arrange
  int expectedCount=25;
 //Act
  int actualCount=printColorMap();
  //Assert
  ASSERT_EQ(expectedCount,actualCount);
  
}
TEST(PrintColorCodeTestSuite, AssertColorCodeManualItemsCount1){
//Arrange
  int expectedCount=23;
 //Act
  int actualCount=printColorMap();
  //Assert
  ASSERT_EQ(expectedCount,actualCount);
  
}

