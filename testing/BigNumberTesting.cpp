#include "src/include/BigNumber.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{

    class BigNumberTests : public testing::Test
    {

    public:
        BigNumberTests() = default;



    };

}

TEST_F(BigNumberTests, BigNumberTests_Addition__Test)
{
    //Addition
    ASSERT_TRUE((BigNums::BigNumber("86") + BigNums::BigNumber("13")) == BigNums::BigNumber("99"));
    ASSERT_TRUE((BigNums::BigNumber(14) + BigNums::BigNumber(729)) == "743");
    ASSERT_TRUE((BigNums::BigNumber("-43") + BigNums::BigNumber("9")) == -34);
    ASSERT_TRUE((BigNums::BigNumber(382731) + BigNums::BigNumber("0")) == BigNums::BigNumber(382731));
    ASSERT_TRUE((BigNums::BigNumber("126") + BigNums::BigNumber(39285)) == "39411");
    ASSERT_TRUE((BigNums::BigNumber(0) + BigNums::BigNumber("0")) == 0);
    ASSERT_TRUE(BigNums::BigNumber(5) + "10" == 15);
    ASSERT_TRUE((BigNums::BigNumber("-47") + 41) == -6);

    BigNums::BigNumber addTest(200);
    addTest += 50;
    ASSERT_TRUE(addTest == "250");
    addTest = addTest + "150";
    ASSERT_TRUE(addTest == 400);

}

TEST_F(BigNumberTests, BigNumberTests_Subtraction_Test)
{
    //Subtraction
    ASSERT_TRUE((BigNums::BigNumber("64") - BigNums::BigNumber("23")) == BigNums::BigNumber("41"));
    ASSERT_TRUE((BigNums::BigNumber(35) - BigNums::BigNumber("70")) == "-35");
    ASSERT_TRUE((BigNums::BigNumber("0") - BigNums::BigNumber(46)) == -46);
    ASSERT_TRUE((BigNums::BigNumber("50") - BigNums::BigNumber("50")) == BigNums::BigNumber());
    ASSERT_TRUE((BigNums::BigNumber(482847) - BigNums::BigNumber("89787941")) == "-89305094");
    ASSERT_TRUE((BigNums::BigNumber(6828) - BigNums::BigNumber(1)) == 6827);
    ASSERT_TRUE((BigNums::BigNumber("125") - BigNums::BigNumber("57")) == BigNums::BigNumber(68));
    ASSERT_TRUE((BigNums::BigNumber("42") - BigNums::BigNumber(49)) == "-7");
    ASSERT_TRUE((BigNums::BigNumber("173") - BigNums::BigNumber(78)) == 95);

    BigNums::BigNumber subTest(200);
    subTest -= 50;
    ASSERT_TRUE(subTest == 150);
    subTest = subTest - 150;
    ASSERT_TRUE(subTest == "0");

}

TEST_F(BigNumberTests, BigNumberTests_Multiplication_Test)
{
    //Multiplication
    ASSERT_TRUE((BigNums::BigNumber("4") * BigNums::BigNumber("12")) == BigNums::BigNumber("48"));
    ASSERT_TRUE((BigNums::BigNumber(4324) * BigNums::BigNumber("1")) == "4324");
    ASSERT_TRUE((BigNums::BigNumber(3982374) * BigNums::BigNumber(0)) == 0);
    ASSERT_TRUE((BigNums::BigNumber("-7") * BigNums::BigNumber("7")) == BigNums::BigNumber(-49));
    ASSERT_TRUE((BigNums::BigNumber("-42") * BigNums::BigNumber(-9)) == "378");
    ASSERT_TRUE((BigNums::BigNumber("947") * BigNums::BigNumber("293481")) == 277926507);

    BigNums::BigNumber mulTest(4);
    mulTest *= 9;
    ASSERT_TRUE(mulTest == "36");
    mulTest = BigNums::BigNumber(5) * "8";
    ASSERT_TRUE(mulTest == 40);
}

TEST_F(BigNumberTests, BigNumberTests_Division_Test)
{
    //Division
    ASSERT_TRUE(BigNums::BigNumber("81") / BigNums::BigNumber("9") == BigNums::BigNumber(9));
    ASSERT_TRUE(BigNums::BigNumber("49") / BigNums::BigNumber("7") == "7");
    ASSERT_TRUE(BigNums::BigNumber("100") / BigNums::BigNumber("10") == 10);

    BigNums::BigNumber divTest(200);
    divTest /= 50;
    ASSERT_TRUE(divTest == "4");
    divTest = 4 / 2;
    ASSERT_TRUE(divTest == 2);

}

TEST_F(BigNumberTests, BigNumberTests_Equals_Test)
{
    //Equals
    ASSERT_TRUE(BigNums::BigNumber(4) == BigNums::BigNumber(4));
    ASSERT_TRUE(BigNums::BigNumber(-3) == BigNums::BigNumber("-3"));
    ASSERT_TRUE(BigNums::BigNumber("0") == BigNums::BigNumber(0));
    ASSERT_TRUE(BigNums::BigNumber("8493373937430228") == BigNums::BigNumber("8493373937430228"));

}

TEST_F(BigNumberTests, BigNumberTests_Not_Equals_Test)
{
    //Equals
    ASSERT_TRUE(BigNums::BigNumber(4) != BigNums::BigNumber(5));
    ASSERT_TRUE(BigNums::BigNumber(-3) != BigNums::BigNumber("-12"));
    ASSERT_TRUE(BigNums::BigNumber("0") != BigNums::BigNumber(54));
    ASSERT_TRUE(BigNums::BigNumber("8493373937430228") != BigNums::BigNumber("744837226"));

}

TEST_F(BigNumberTests, BigNumberTests_Greater_Than_Test)
{
    //Greater than
    ASSERT_TRUE(BigNums::BigNumber(9) > BigNums::BigNumber("2"));
    ASSERT_TRUE(BigNums::BigNumber("40") > BigNums::BigNumber("-40"));
    ASSERT_TRUE(BigNums::BigNumber("-2") > BigNums::BigNumber(-45));
    ASSERT_TRUE(BigNums::BigNumber(0) > BigNums::BigNumber(-1));
}

TEST_F(BigNumberTests, BigNumberTests_Less_Than_Test)
{
    //Less than
    ASSERT_TRUE(BigNums::BigNumber(0) < BigNums::BigNumber("25"));
    ASSERT_TRUE(BigNums::BigNumber(-14) < BigNums::BigNumber(0));
    ASSERT_TRUE(BigNums::BigNumber("30") < BigNums::BigNumber("38437"));
}

TEST_F(BigNumberTests, BigNumberTests_Greater_Equal_Test)
{
    //Greater than or equal to
    ASSERT_TRUE(BigNums::BigNumber(25) >= BigNums::BigNumber("4"));
    ASSERT_TRUE(BigNums::BigNumber("-5") >= BigNums::BigNumber(-5));
    ASSERT_TRUE(BigNums::BigNumber("-5") >= BigNums::BigNumber("-100"));
    ASSERT_TRUE(BigNums::BigNumber(0) >= BigNums::BigNumber(0));
    ASSERT_TRUE(BigNums::BigNumber("32") >= BigNums::BigNumber("-32"));
    ASSERT_TRUE(BigNums::BigNumber(22) >= BigNums::BigNumber("1"));
}

TEST_F(BigNumberTests, BigNumberTests_Less_Equal_Test)
{
    //Less than or equal to
    ASSERT_TRUE(BigNums::BigNumber(14) <= BigNums::BigNumber("20"));
    ASSERT_TRUE(BigNums::BigNumber("0") <= BigNums::BigNumber());
    ASSERT_TRUE(BigNums::BigNumber(-19) <= BigNums::BigNumber(0));
    ASSERT_TRUE(BigNums::BigNumber(42) <= BigNums::BigNumber("42"));
    ASSERT_TRUE(BigNums::BigNumber("9000") <= BigNums::BigNumber("843942"));
}

