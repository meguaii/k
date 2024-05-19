     #include <gtest/gtest.h>
     #include "SimpleFactory.h"

     TEST(SimpleFactoryTest, CreateProductA) {
         auto product = SimpleFactory::createProduct("A");
         EXPECT_NE(product, nullptr);
         EXPECT_EQ(product->getName(), "ProductA");
     }

     TEST(SimpleFactoryTest, CreateProductB) {
         auto product = SimpleFactory::createProduct("B");
         EXPECT_NE(product, nullptr);
         EXPECT_EQ(product->getName(), "ProductB");
     }

     TEST(SimpleFactoryTest, CreateUnknownProduct) {
         auto product = SimpleFactory::createProduct("Unknown");
         EXPECT_EQ(product, nullptr);
     }
     
