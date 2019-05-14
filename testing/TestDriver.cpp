#include <gtest/gtest.h>
#include <gmock/gmock.h>


extern "C" int TestDriver(int argc, char *argv[]) {


    testing::InitGoogleTest(&argc, argv);


    return RUN_ALL_TESTS();
}
